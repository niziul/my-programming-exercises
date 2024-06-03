#include "c_rectangle.h"

void c_rectangle::translate(const int_fast16_t& x,
                            const int_fast16_t& y)
{
    point_a
        .translate(x,
                   y);
    point_b
        .translate(x,
                   y);
}