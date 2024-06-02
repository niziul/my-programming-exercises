#pragma once

#include <iostream>

using std::cout;
using std::endl;

class point_a
{
public:
    point_a(int_fast16_t x, int_fast16_t y)
    {
        this->x
            = x;

        this->y
            = y;
    }

    void display_point_values()
    {
        cout << "{" << endl;
        cout << "\tx: \'" << x << "\';" << endl;
        cout << "\ty: \'" << y << "\';" << endl;
        cout << "}" << endl;
    }

    void move_to(int_fast16_t, int_fast16_t);
    void translate(int_fast16_t, int_fast16_t);
    
private:
    int_fast16_t x;
    int_fast16_t y;

};
