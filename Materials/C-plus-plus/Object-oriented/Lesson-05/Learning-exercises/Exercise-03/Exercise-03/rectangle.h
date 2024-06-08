#pragma once

#include "point.h" 

class rectangle
{
public:
    rectangle()
    : point_a
    {
        0,
        0
    },
      point_b
    {
        0,
        0
    }{};

    rectangle(const point& point_a,
              const point& point_b)
    : point_a
    {
        point_a
    },
      point_b
    {
        point_b
    }{};

    rectangle(const int_fast16_t& ax,
              const int_fast16_t& ay,
              const int_fast16_t& bx,
              const int_fast16_t& by)
    : point_a
    {
        ax,
        ay
    },
      point_b
    {
        bx,
        by
    }{};

    void translate(const int_fast16_t&,
                   const int_fast16_t&);

private:
    point point_a;
    point point_b;

};
