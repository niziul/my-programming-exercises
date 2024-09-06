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

lazy_vector2::lazy_vector2(double value_a,
                           double value_b)
{
    this->magnitude
        = value_a;
    this->angle
        = value_b;
}

lazy_vector2 lazy_vector2::operator+(const lazy_vector2& lazy_vector2_a)
const
{
    return lazy_vector2(get_x() + lazy_vector2_a.get_x(),
                        get_y() + lazy_vector2_a.get_y());
}

lazy_vector2 lazy_vector2::operator-(const lazy_vector2& lazy_vector2_a)
const
{
    return lazy_vector2(get_x() - lazy_vector2_a.get_x(),
                        get_y() - lazy_vector2_a.get_y());
}

lazy_vector2 lazy_vector2::operator-() const
{
    return lazy_vector2(-get_x(),
                        -get_y());
}

lazy_vector2 lazy_vector2::operator*(double value_a)
const
{
    return lazy_vector2(value_a * get_x(),
                        value_a * get_y());
}

double lazy_vector2::get_x()
const
{
    return round(this->magnitude * cos(this->angle / degrees_by_radius));
}

double lazy_vector2::get_y()
const
{
    return round(this->magnitude * sin(this->angle / degrees_by_radius));
}

lazy_vector2 operator*(const double& value_a, const lazy_vector2& lazy_vector2_a)
{
    return lazy_vector2(value_a * lazy_vector2_a.get_x(),
                        value_a * lazy_vector2_a.get_y());
}

ostream& operator<<(ostream& ostream_a, const lazy_vector2& lazy_vector2_a)
{
    ostream_a << "{\n";
    ostream_a << "\t m: \'" << lazy_vector2_a.magnitude << "\',\n";
    ostream_a << "\t a: \'" << lazy_vector2_a.angle << "\',\n";
    ostream_a << "}\n";

    return ostream_a;
}