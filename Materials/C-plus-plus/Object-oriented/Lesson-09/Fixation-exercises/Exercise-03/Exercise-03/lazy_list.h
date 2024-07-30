#pragma once

#include <iostream>

using std::cout;
using std::endl;

using lazy_item = int;

class lazy_list
{
public:
    lazy_list(const int& size);
    ~lazy_list();

    bool empty()
    const;
    bool full()
    const;
    bool add(const lazy_item& item);
    int operator()(const int& index);
    int operator[](const int& index);

private:
    lazy_item* items;
    int size;
    int max;

};

