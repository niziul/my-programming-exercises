#include <ostream>
#include <cmath>
#include "lazy_vector2.h"

using std::ostream;

const double degrees_by_radius
    = 45.0 / atan(1.0);

lazy_vector2::lazy_vector2()
{
    this->magnitude
        = 0;
    this->angle
        = 0;
}

lazy_vector2::lazy_vector2(double magnitude,
                           double angle)
{
    this->magnitude
        = magnitude;
    this->angle
        = angle;
}

lazy_vector2 lazy_vector2::operator+(const lazy_vector2& lazy_vector2_a)
const
{
    return lazy_vector2(magnitude + lazy_vector2_a.magnitude,
                        (angle + lazy_vector2_a.angle) / 2);
}

lazy_vector2 lazy_vector2::operator-(const lazy_vector2& lazy_vector2_a)
const
{
    return lazy_vector2(magnitude - lazy_vector2_a.magnitude,
                        angle - lazy_vector2_a.angle);
}

lazy_vector2 lazy_vector2::operator-() const
{
    return lazy_vector2(-magnitude,
                        -angle);
}

lazy_vector2 lazy_vector2::operator*(double value_a)
const
{
    return lazy_vector2(value_a * magnitude,
                        (value_a + angle) / 2);
}

double lazy_vector2::get_x()
const
{
    return this->magnitude * cos(this->angle / degrees_by_radius);
}

double lazy_vector2::get_y()
const
{
    return this->magnitude * sin(this->angle / degrees_by_radius);
}

double lazy_vector2::get_magnitude()
const
{
    return this->magnitude;
}

double lazy_vector2::get_angle()
const
{
    return this->angle;
}

lazy_vector2 operator*(const double& value_a, const lazy_vector2& lazy_vector2_a)
{
    return lazy_vector2(value_a * lazy_vector2_a.magnitude,
                        (value_a + lazy_vector2_a.angle) / 2);
}

ostream& operator<<(ostream& ostream_a, const lazy_vector2& lazy_vector2_a)
{
    ostream_a << "{\n";
    ostream_a << "\t m: \'" << lazy_vector2_a.magnitude << "\',\n";
    ostream_a << "\t a: \'" << lazy_vector2_a.angle * degrees_by_radius << "\',\n";
    ostream_a << "}\n";

    return ostream_a;
}