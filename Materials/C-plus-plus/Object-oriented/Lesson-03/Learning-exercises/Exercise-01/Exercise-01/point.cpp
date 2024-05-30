#include "point.h"

int_fast16_t c_point::get_x() const
{
    return this->x;
}

int_fast16_t c_point::get_y() const
{
    return this->y;
}

int_fast16_t c_point::get_width() const
{
    return this->width;
}

int_fast16_t c_point::get_height() const
{
    return this->height;
}

void c_point::move_to(int_fast16_t x, int_fast16_t y)
{
    if (x > 0
        &&
        x < width)
    {
        this->x
            = x;
    }

    if (y > 0
        &&
        y < height)
    {
        this->y
            = y;
    }
}

void c_point::translate(int_fast16_t x, int_fast16_t y)
{
    if (x > 0
        &&
        x < width - this->x)
    {
        this->x
            += x;
    }

    if (y > 0
        &&
        y < height - this->y)
    {
        this->y
            += y;
    }
}
