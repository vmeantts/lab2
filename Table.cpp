#include <iostream>
#include "Table.h"

using namespace std;

Table::Table(int r, int c)
{
    rows = r;
    cols = c;

    data.resize(rows, vector<int>(cols, 0));
}

int Table::get_value(int row, int col)
{
    return data[row][col];
}

void Table::set_value(int row, int col, int value)
{
    data[row][col] = value;
}

int Table::n_rows()
{
    return rows;
}

int Table::n_cols()
{
    return cols;
}

void Table::print()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << data[i][j] << " ";
        }

        cout << endl;
    }
}

double Table::average()
{
    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += data[i][j];
        }
    }

    return (double)sum / (rows * cols);
}