#ifndef STOCK_H
#define STOCK_H

#include <vector>

class Stock
{
private:
    struct Box
    {
        int id;
        int w;
        int v;
    };

    std::vector<Box> boxes;
    int nextId;

public:
    Stock();

    void Add(int w, int v);
    int GetByW(int min_w);
    int GetByV(int min_v);
};

#endif
