#include "lazy_list.h"

lazy_list::lazy_list(const int& size)
{
    this->size
        = 0;

    this->max
        = size;

    this->items
        = new lazy_item[size];
}

lazy_list::~lazy_list()
{
    delete[] this->items;
}

bool lazy_list::empty() const
{
    return this->size == 0;
}

bool lazy_list::full() const
{
    return this->size == this->max;
}

bool lazy_list::add(const lazy_item& item)
{
    if (this->size == this->max)
    {
        return false;
    }

    *(items + size++)
        = item;

    return true;
}

int lazy_list::operator()(const int& index)
{
    if (index >= this->size)
    {
        cout << "error: index out of scope; ";

        return 0;
    }

    return *(items + index);
}

int lazy_list::operator[](const int& index)
{
    if (index >= this->size)
    {
        cout << "error: index out of scope; ";

        return 0;
    }

    return *(items + index);
}
