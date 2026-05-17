#ifndef TABLE_H
#define TABLE_H

#include <vector>

class Table
{
private:
    int rows;
    int cols;
    std::vector<std::vector<int>> data;

public:
    Table(int r, int c);

    int get_value(int row, int col);
    void set_value(int row, int col, int value);

    int n_rows();
    int n_cols();

    void print();
    double average();
};

#endif
