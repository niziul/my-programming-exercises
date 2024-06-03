#pragma once

#include "c_point.h" 

using std::cout;
using std::endl;

class c_rectangle
{
public:
    c_rectangle(const int_fast16_t& ax = 0,
                const int_fast16_t& ay = 0,
                const int_fast16_t& bx = 0,
                const int_fast16_t& by = 0) : point_a(ax,
                                                      ay),
                                              point_b(bx,
                                                      by)
    {
    };

    void translate(const int_fast16_t&,
                   const int_fast16_t&);
    void display_rectangle_size()
const;
    void display_rectangle_position()
const;

private:
    c_point point_a;
    c_point point_b;

};

inline void c_rectangle::display_rectangle_size()
const
{
    auto width
        = abs(point_a
                .get_x()
              -
              point_b
                .get_x());

    auto height
        = abs(point_a
                .get_y()
              -
              point_b
                .get_y());

    cout << "{" << endl;
    cout << "\tw: \'" << width << "\';" << endl;
    cout << "\th: \'" << height << "\';" << endl;
    cout << "}" << endl;
}

inline void c_rectangle::display_rectangle_position()
const
{
    cout << "{" << endl;
    cout << "\tx: \'" << point_a.get_x() << ", " << point_b.get_x() << "\';" << endl;
    cout << "\ty: \'" << point_a.get_y() << ", " << point_b.get_y() << "\';" << endl;
    cout << "}" << endl;
}

