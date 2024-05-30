#pragma once

#include <iostream>

class c_point
{
public:
    c_point(int_fast16_t width, int_fast16_t height)
    {
        this->x
            = 0;
        this->y
            = 0;

        this->width
            = width;
        this->height
            = height;
    }

    int_fast16_t get_x() const;
    int_fast16_t get_y() const;

    int_fast16_t get_width() const;
    int_fast16_t get_height() const;

    void move_to(int_fast16_t, int_fast16_t);
    void translate(int_fast16_t, int_fast16_t);

private:
    int_fast16_t width;
    int_fast16_t height;
    int_fast16_t x;
    int_fast16_t y;
};
