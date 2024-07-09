#pragma once

using item = char;

class stack
{
public:
    stack();

    const bool empty()
    const;
    const bool full()
    const;

    bool add(const item& item_a);
    bool remover(item& item_a);

private:
    enum
    {
        max = 10
    };

    item items[max];
    int top;
};

