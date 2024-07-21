#pragma once

#include <vector>

using std::vector;

template<typename T>
class list
{
public:
    list()
    {
        items
            = vector<T>();
    }

    ~list()
    {
        items.clear();
    }


    bool is_full();
    bool is_empty();

    void add(const T&);
    void visit(void (*pf)(const T&));

private:
    vector<T> items;

};

template<typename T>
bool list<T>::is_full()
{
    return items.size() == items.capacity();
}

template<typename T>
bool list<T>::is_empty()
{
    return items.empty();
}

template<typename T>
void list<T>::add(const T& item)
{
    items.push_back(item);
}

template<typename T>
void list<T>::visit(void(*pf)(const T&))
{
    for (T& item : items)
    {
        (*pf)(item);
    }
}
