#include "Stack.h"
#include "Queue.h"
#include "Dictionary.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void runStackTests(const std::string &filename) {
	Stack<int> stack;
	std::ifstream file(filename);
	std::string line;
	while (std::getline(file, line)) {
		std::istringstream iss(line);
		std::string command;
		iss >> command;
		if (command == "push") {
			int value;
			iss >> value;
			stack.push(value);
			std::cout << "Pushed " << value << std::endl;
		}
		else if (command == "pop") {
			try {
				std::cout << "Popped " << stack.pop() << std::endl;
			}
			catch (const std::exception &e) {
				std::cout << e.what() << std::endl;
			}
		}
		else if (command == "peek") {
			try {
				std::cout << "Peek: " << stack.peek() << std::endl;
			}
			catch (const std::exception &e) {
				std::cout << e.what() << std::endl;
			}
		}
		else if (command == "size") {
			std::cout << "Size: " << stack.size() << std::endl;
		}
	}
}

void runQueueTests(const std::string &filename) {
	Queue<int> queue;
	std::ifstream file(filename);
	std::string line;
	while (std::getline(file, line)) {
		std::istringstream iss(line);
		std::string command;
		iss >> command;
		if (command == "enqueue") {
			int value;
			iss >> value;
			queue.enqueue(value);
			std::cout << "Enqueued " << value << std::endl;
		}
		else if (command == "dequeue") {
			try {
				std::cout << "Dequeued " << queue.dequeue() << std::endl;
			}
			catch (const std::exception &e) {
				std::cout << e.what() << std::endl;
			}
		}
		else if (command == "front") {
			try {
				std::cout << "Front: " << queue.front() << std::endl;
			}
			catch (const std::exception &e) {
				std::cout << e.what() << std::endl;
			}
		}
		else if (command == "size") {
			std::cout << "Size: " << queue.size() << std::endl;
		}
	}
}

void runDictionaryTests(const std::string &filename) {
	Dictionary<std::string, int> dictionary;
	std::ifstream file(filename);
	std::string line;
	while (std::getline(file, line)) {
		std::istringstream iss(line);
		std::string command;
		iss >> command;
		if (command == "set") {
			std::string key;
			int value;
			iss >> key >> value;
			dictionary.set(key, value);
			std::cout << "Set " << key << " = " << value << std::endl;
		}
		else if (command == "get") {
			std::string key;
			iss >> key;
			try {
				std::cout << "Get " << key << ": " << dictionary.get(key) << std::endl;
			}
			catch (const std::exception &e) {
				std::cout << e.what() << std::endl;
			}
		}
		else if (command == "remove") {
			std::string key;
			iss >> key;
			try {
				dictionary.remove(key);
				std::cout << "Removed " << key << std::endl;
			}
			catch (const std::exception &e) {
				std::cout << e.what() << std::endl;
			}
		}
		else if (command == "size") {
			std::cout << "Size: " << dictionary.size() << std::endl;
		}
	}
}

int main(int argc, char *argv[]) {
	if (argc < 3) {
		std::cerr << "Usage: " << argv[0] << " <test-type> <test-file>" << std::endl;
		return 1;
	}

	std::string testType = argv[1];
	std::string filename = argv[2];

	if (testType == "stack") {
		runStackTests(filename);
	}
	else if (testType == "queue") {
		runQueueTests(filename);
	}
	else if (testType == "dictionary") {
		runDictionaryTests(filename);
	}
	else {
		std::cerr << "Invalid test type. Use 'stack', 'queue', or 'dictionary'." << std::endl;
		return 1;
	}

	return 0;
}
