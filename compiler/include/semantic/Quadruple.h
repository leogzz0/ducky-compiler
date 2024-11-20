// Quadruple.h

#ifndef QUADRUPLE_H
#define QUADRUPLE_H

#include <vector>
#include <string>
#include <tuple>

class Quadruple {
private:
    std::vector<std::tuple<std::string, int, int, int>> quadruples;
    int quadCount;

public:
    Quadruple() : quadCount(0) {}
    
    void push(const std::string&op, int op1, int op2, int result);

    std::vector<std::tuple<std::string, int, int, int>>& getQuadruples();
    const std::vector<std::tuple<std::string, int, int, int>>& getQuadruples() const;
    int getCount() const { return quadCount; }

    void updateJump(int quadIndex, int jumpAddr);
};

#endif