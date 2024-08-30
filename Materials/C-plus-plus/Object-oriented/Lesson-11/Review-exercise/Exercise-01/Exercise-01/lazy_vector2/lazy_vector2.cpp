#include <ostream>
#include <cmath>
#include "lazy_vector2.h"

using std::ostream;

const double degrees_by_radius
    = 45.0 / atan(1.0);

lazy_vector2::lazy_vector2()
{
    this->x
        = 0;
    this->y
        = 0;
    this->angle
        = 0;
    this->magnitude
        = 0;
    this->type
        = rectangular;
}

lazy_vector2::lazy_vector2(double value_a,
                           double value_b,
                           eCoordinates coordinate_type)
{
    this->type
        = coordinate_type;

    switch (coordinate_type)
    {
    case lazy_vector2::rectangular:
    {
        this->x
            = value_a;
        this->y
            = value_b;

        set_angle();
        set_magnitude();
    }
    break;
    case lazy_vector2::polar:
    {
        this->angle
            = value_b / degrees_by_radius;
        this->magnitude
            = value_a;

        set_x();
        set_y();
    }
    break;
    }
}

lazy_vector2 lazy_vector2::sum(const lazy_vector2& lazy_vector2_a)
const
{
    return lazy_vector2(this->x + lazy_vector2_a.x,
                        this->y + lazy_vector2_a.y);
}

lazy_vector2 lazy_vector2::sub(const lazy_vector2& lazy_vector2_a)
const
{
    return lazy_vector2(this->x - lazy_vector2_a.x,
                        this->y - lazy_vector2_a.y);
}

lazy_vector2 lazy_vector2::sub() const
{
    return lazy_vector2(-this->x,
                        -this->y);
}

lazy_vector2 lazy_vector2::mult(double value_a)
const
{
    return lazy_vector2(value_a * this->x,
                        value_a * this->y);
}

void lazy_vector2::set_x()
{
    this->x
        = this->magnitude * cos(this->angle);
}

void lazy_vector2::set_y()
{
    this->y
        = this->magnitude * sin(this->angle);
}

void lazy_vector2::set_angle()
{
    this->angle
        = atan2(y, x);
}

void lazy_vector2::set_magnitude()
{
    this->magnitude
        = sqrt(this->x * this->x
               +
               this->y * this->y);
}

lazy_vector2 lazy_vector2::mult(const double& value_a, const lazy_vector2& lazy_vector2_a)
{
    return lazy_vector2(value_a * lazy_vector2_a.x,
                        value_a * lazy_vector2_a.y);
}

void lazy_vector2::display()
const
{
    switch (this->type)
    {
    case lazy_vector2::rectangular:
    {
        cout << "{\n";
        cout << "\t x: \'" << this->x << "\',\n";
        cout << "\t y: \'" << this->y << "\',\n";
        cout << "}\n";
    }
    break;
    case lazy_vector2::polar:
    {
        cout << "{\n";
        cout << "\t m: \'" << this->magnitude << "\',\n";
        cout << "\t a: \'" << this->angle * degrees_by_radius << "\',\n";
        cout << "}\n";
    }
    break;
    }
}