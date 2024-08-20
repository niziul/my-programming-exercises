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

lazy_vector2 lazy_vector2::operator+(const lazy_vector2& lazy_vector2_a)
const
{
    return lazy_vector2(this->x + lazy_vector2_a.x,
                        this->y + lazy_vector2_a.y);
}

lazy_vector2 lazy_vector2::operator-(const lazy_vector2& lazy_vector2_a)
const
{
    return lazy_vector2(this->x - lazy_vector2_a.x,
                        this->y - lazy_vector2_a.y);
}

lazy_vector2 lazy_vector2::operator-() const
{
    return lazy_vector2(-this->x,
                        -this->y);
}

lazy_vector2 lazy_vector2::operator*(double value_a)
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

lazy_vector2 operator*(const double& value_a, const lazy_vector2& lazy_vector2_a)
{
    return lazy_vector2(value_a * lazy_vector2_a.x,
                        value_a * lazy_vector2_a.y);
}

ostream& operator<<(ostream& ostream_a, const lazy_vector2& lazy_vector2_a)
{
    switch (lazy_vector2_a.type)
    {
    case lazy_vector2::rectangular:
    {
        ostream_a << "{\n";
        ostream_a << "\t x: \'" << lazy_vector2_a.x << "\',\n";
        ostream_a << "\t y: \'" << lazy_vector2_a.y << "\',\n";
        ostream_a << "}\n";
    }
    break;
    case lazy_vector2::polar:
    {
        ostream_a << "{\n";
        ostream_a << "\t m: \'" << lazy_vector2_a.magnitude << "\',\n";
        ostream_a << "\t a: \'" << lazy_vector2_a.angle * degrees_by_radius << "\',\n";
        ostream_a << "}\n";
    }
    break;
    }

    return ostream_a;
}
