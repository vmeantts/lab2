#include "Stock.h"

using namespace std;

Stock::Stock()
{
    nextId = 0;
}

void Stock::Add(int w, int v)
{
    Box box;

    box.id = nextId;
    box.w = w;
    box.v = v;

    boxes.push_back(box);

    nextId++;
}

int Stock::GetByW(int min_w)
{
    int index = -1;

    for (int i = 0; i < boxes.size(); i++)
    {
        if (boxes[i].w >= min_w)
        {
            if (index == -1 || boxes[i].w < boxes[index].w)
            {
                index = i;
            }
        }
    }

    if (index == -1)
    {
        return -1;
    }

    int result = boxes[index].id;

    boxes.erase(boxes.begin() + index);

    return result;
}

int Stock::GetByV(int min_v)
{
    int index = -1;

    for (int i = 0; i < boxes.size(); i++)
    {
        if (boxes[i].v >= min_v)
        {
            if (index == -1 || boxes[i].v < boxes[index].v)
            {
                index = i;
            }
        }
    }

    if (index == -1)
    {
        return -1;
    }

    int result = boxes[index].id;

    boxes.erase(boxes.begin() + index);

    return result;
}