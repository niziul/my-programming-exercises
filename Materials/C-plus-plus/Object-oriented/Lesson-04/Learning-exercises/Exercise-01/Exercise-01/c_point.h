#pragma once

#include <iostream>

class c_point
{
public:
    c_point(const int_fast16_t& x = 0,
            const int_fast16_t& y = 0) : x(x),
                                         y(y)
    {
    };

    int_fast16_t get_x()
const;
    int_fast16_t get_y()
const;

    void translate(const int_fast16_t&,
                   const int_fast16_t&);

private:
    int_fast16_t x;
    int_fast16_t y;
};

inline int_fast16_t c_point::get_x()
const
{
    return this->x;
}

inline int_fast16_t c_point::get_y()
const
{
    return this->y;
}
