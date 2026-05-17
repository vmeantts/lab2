#include <iostream>
#include "Table.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int rows;
    int cols;
    int value;

    cout << "введите количество строк: ";
    cin >> rows;

    cout << "введите количество столбцов: ";
    cin >> cols;

    while (rows <= 0 || cols <= 0)
    {
        cout << "ошибка. введите заново: ";
        cin >> rows >> cols;
    }

    Table table(rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "введите элемент [" << i << "][" << j << "]: ";
            cin >> value;

            table.set_value(i, j, value);
        }
    }

    cout << "\nтаблица:\n";
    table.print();

    cout << "\nсреднее: " << table.average() << endl;

    return 0;
}