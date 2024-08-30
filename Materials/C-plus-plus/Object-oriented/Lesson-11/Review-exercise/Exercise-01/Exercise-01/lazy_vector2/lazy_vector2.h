#pragma once

#include <iostream>

using std::cout;
using std::endl;

class lazy_vector2
{
public:
    enum eCoordinates
    {
        rectangular,
        polar
    };

    lazy_vector2();
    lazy_vector2(double value_a,
                 double value_b,
                 eCoordinates coordinate_type = rectangular);

    double get_angle()
    const
    {
        return this->angle;
    }
    double get_magnitude()
    const
    {
        return this->magnitude;
    }
    void set_coordinate_type(const eCoordinates& coordinate_type)
    {
        this->type = coordinate_type;
    }

    lazy_vector2 sum(const lazy_vector2& lazy_vector2_a)
    const;
    lazy_vector2 sub(const lazy_vector2& lazy_vector2_a)
    const;

    lazy_vector2 sub()
    const;
    lazy_vector2 mult(double value_a)
    const;

    lazy_vector2 mult(const double& value_a, const lazy_vector2& lazy_vector2_a);
    void display()
    const;

private:
    double x;
    double y;
    double angle;
    double magnitude;

    eCoordinates type;

    void set_x();
    void set_y();
    void set_angle();
    void set_magnitude();

};
