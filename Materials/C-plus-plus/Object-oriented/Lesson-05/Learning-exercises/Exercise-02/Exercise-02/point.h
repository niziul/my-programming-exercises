#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::int_fast16_t;

class point
{
public:
    point()
    {
        this->x
            = 0;
        this->y
            = 0;
    };
    point(const int_fast16_t& x,
          const int_fast16_t& y)
    {
        this->x
            = x;
        this->y
            = y;
    };

    void display()
    const;

    void move_to(const int_fast16_t&,
                 const int_fast16_t&);

    void translate(const int_fast16_t&,
                   const int_fast16_t&);

private:
    int_fast16_t x;
    int_fast16_t y;
};

inline void point::display()
const
{
    cout << "{" << endl;
    cout << "\tx: \'" << this->x << "\';" << endl;
    cout << "\ty: \'" << this->y << "\';" << endl;
    cout << "}" << endl;
};
