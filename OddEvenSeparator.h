#ifndef ODDEVENSEPARATOR_H
#define ODDEVENSEPARATOR_H

#include <vector>

class OddEvenSeparator
{
private:
    std::vector<int> evenNumbers;
    std::vector<int> oddNumbers;

public:
    void add_number(int number);
    void even();
    void odd();
};

#endif
