#pragma once

#include <iostream>

using std::cout;
using std::endl;

class point_b
{
public:
    point_b(int_fast16_t x, int_fast16_t y)
    {
        this->x
            = x;

        this->y
            = y;
    }

    void display_point_values();

    void move_to(int_fast16_t, int_fast16_t);
    void translate(int_fast16_t, int_fast16_t);

private:
    int_fast16_t x;
    int_fast16_t y;

};
