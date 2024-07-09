#include "stack.h"

stack::stack()
{
    top
        = 0;
}

const bool stack::empty() const
{
    return top == 0;
}

const bool stack::full() const
{
    return top == max;
}

bool stack::add(const item& item_a)
{
    if (top < max)
    {
        items[top++]
            = item_a;

        return true;
    }

    return false;
}

bool stack::remover(item& item_a)
{
    if (top > 0)
    {
        item_a
            = items[--top];

        return true;
    }

    return false;
}
