#include "stack.h"

const bool stack::empty() const
{
    return index == 0;
}

void stack::add(const item& item_a)
{
    if (index < size)
    {
        *(items + index++)
            = item_a;
    }
    else
    {
        auto temp
            = new item[++size];
        
        for (size_t i = 0; i < index; i++)
        {
            *(temp + i)
                = *(items + i);
        }

        delete[] items;

        items
            = temp;

        *(items + index++)
            = item_a;
    }
}

bool stack::remover(item& item_a)
{
    if (index > 0)
    {
        item_a
            = *(items + --index);

        return true;
    }

    return false;
}