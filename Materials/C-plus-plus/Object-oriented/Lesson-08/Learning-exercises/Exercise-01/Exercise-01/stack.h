#pragma once

using item = char;

class stack
{
public:
    stack(const int& size = 1)
    : size
    {
        size
    },
      index
    {
        0
    }
    {
        items
            = new item[size];
    }

    ~stack()
    {
        delete[] items;
    }

    const bool empty()
    const;

    void add(const item& item_a);
    bool remover(item& item_a);

private:
    int size;
    int index;
    item* items;
};