#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <variant>
#include <sstream>
#include <stack>

// Value type that can hold different types of data
using Value = std::variant<int, float, std::string, bool>;

// Function information structure
struct FunctionInfo {
    std::string returnType;
    int startAddress;
    int localIntStart;
    int localFloatStart;
    int localVars;
    int params;
};

// Memory frame class
class MemoryStack {
private:
    std::vector<std::map<int, Value>> stack;

public:
    MemoryStack() {
        stack.push_back(std::map<int, Value>());
    }

    void pushFrame() {
        stack.push_back(std::map<int, Value>());
    }

    void popFrame() {
        if (stack.size() > 1) {
            stack.pop_back();
        }
    }

    Value getValue(int address) {
        for (auto it = stack.rbegin(); it != stack.rend(); ++it) {
            auto found = it->find(address);
            if (found != it->end()) {
                return found->second;
            }
        }
        return 0;  // Default value
    }

    void setValue(int address, const Value& value) {
        stack.back()[address] = value;
    }
};

class VirtualMachine {
private:
    MemoryStack memoryStack;
    std::map<int, Value> constants;
    std::map<std::string, FunctionInfo> functions;
    std::vector<std::vector<std::string>> quadruples;
    int instructionPointer;
    std::stack<int> callStack;

    // Helper function to get value (either from constants or memory)
    Value getValue(const std::string& addressStr) {
        if (addressStr == "-1") return Value(0);
        
        int address = std::stoi(addressStr);
        auto constIt = constants.find(address);
        if (constIt != constants.end()) {
            return constIt->second;
        }
        
        return memoryStack.getValue(address);
    }

    // Helper function to parse constant value
    Value parseConstant(const std::string& value) {
        if (value.front() == '"' && value.back() == '"') {
            return value.substr(1, value.length() - 2);
        }
        
        if (value.find('.') != std::string::npos) {
            return std::stof(value);
        }
        
        return std::stoi(value);
    }

public:
    VirtualMachine(const std::string& objFilePath) : instructionPointer(0) {
        parseObjFile(objFilePath);
    }

    void parseObjFile(const std::string& filePath) {
        std::ifstream file(filePath);
        std::string line;
        std::string section;

        while (std::getline(file, line)) {
            if (line.empty() || line[0] == '#') continue;

            if (line == "CONSTANTS") {
                section = "constants";
                continue;
            }
            else if (line == "FUNCTIONS") {
                section = "functions";
                continue;
            }
            else if (line == "QUADRUPLES") {
                section = "quadruples";
                continue;
            }

            std::istringstream iss(line);
            if (section == "constants") {
                int address;
                std::string value;
                iss >> address;
                std::getline(iss >> std::ws, value);
                constants[address] = parseConstant(value);
            }
            else if (section == "functions") {
                std::string name, returnType;
                FunctionInfo info;
                iss >> name >> returnType >> info.startAddress >> info.localIntStart 
                    >> info.localFloatStart >> info.localVars >> info.params;
                info.returnType = returnType;
                functions[name] = info;
            }
            else if (section == "quadruples") {
                size_t pos = line.find(": ");
                if (pos != std::string::npos) {
                    std::string quadLine = line.substr(pos + 2);
                    std::vector<std::string> quad;
                    std::istringstream quadIss(quadLine);
                    std::string token;
                    while (quadIss >> token) {
                        quad.push_back(token);
                    }
                    quadruples.push_back(quad);
                }
            }
        }
    }

    void execute() {
        while (instructionPointer < quadruples.size()) {
            const auto& quad = quadruples[instructionPointer];
            const std::string& op = quad[0];

            if (op == "GOTO") {
                instructionPointer = std::stoi(quad[3]) - 1;
            }
            else if (op == "GOTOF") {
                Value condition = getValue(quad[1]);
                if (!std::get<bool>(condition)) {
                    instructionPointer = std::stoi(quad[3]) - 1;
                }
            }
            else if (op == "PRINT") {
                Value value = getValue(quad[3]);
                std::visit([](const auto& v) { std::cout << v << std::endl; }, value);
            }
            else if (op == "=") {
                Value value = getValue(quad[1]);
                memoryStack.setValue(std::stoi(quad[3]), value);
            }
            else if (op == "+") {
                Value left = getValue(quad[1]);
                Value right = getValue(quad[2]);
                int result = std::get<int>(left) + std::get<int>(right);
                memoryStack.setValue(std::stoi(quad[3]), result);
            }
            else if (op == "-") {
                Value left = getValue(quad[1]);
                Value right = getValue(quad[2]);
                int result = std::get<int>(left) - std::get<int>(right);
                memoryStack.setValue(std::stoi(quad[3]), result);
            }
            else if (op == "*") {
                Value left = getValue(quad[1]);
                Value right = getValue(quad[2]);
                int result = std::get<int>(left) * std::get<int>(right);
                memoryStack.setValue(std::stoi(quad[3]), result);
            }
            else if (op == "/") {
                Value left = getValue(quad[1]);
                Value right = getValue(quad[2]);
                if (std::get<int>(right) == 0) {
                    std::cerr << "Error: Division by zero at quadruple " << instructionPointer << std::endl;
                    return;
                }
                float result = std::get<int>(left) / static_cast<float>(std::get<int>(right));
                memoryStack.setValue(std::stoi(quad[3]), result);
            }
            else if (op == ">") {
                Value left = getValue(quad[1]);
                Value right = getValue(quad[2]);
                bool result = std::get<int>(left) > std::get<int>(right);
                memoryStack.setValue(std::stoi(quad[3]), result);
            }
            else if (op == "ERA") {
                memoryStack.pushFrame();
            }
            else if (op == "PARAM") {
                Value paramValue = getValue(quad[1]);
                memoryStack.setValue(std::stoi(quad[3]), paramValue);
            }
            else if (op == "GOSUB") {
                const std::string& funcName = quad[1];
                auto funcIt = functions.find(funcName);
                if (funcIt != functions.end()) {
                    callStack.push(instructionPointer);
                    instructionPointer = funcIt->second.startAddress - 1;
                }
            }
            else if (op == "ENDFUNC") {
                if (!callStack.empty()) {
                    instructionPointer = callStack.top();
                    callStack.pop();
                    memoryStack.popFrame();
                }
            }
            else if (op == "HALT") {
                break;
            }

            instructionPointer++;
        }
    }
};

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Please provide an object file path." << std::endl;
        return 1;
    }

    VirtualMachine vm(argv[1]);
    vm.execute();
    return 0;
}