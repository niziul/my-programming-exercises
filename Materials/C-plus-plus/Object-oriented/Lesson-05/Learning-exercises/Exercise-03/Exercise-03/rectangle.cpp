#include "rectangle.h"

void rectangle::translate(const int_fast16_t& x, const int_fast16_t& y)
{
    point_a
        .translate(x,
                   y);
    point_b
        .translate(x,
                   y);
}
