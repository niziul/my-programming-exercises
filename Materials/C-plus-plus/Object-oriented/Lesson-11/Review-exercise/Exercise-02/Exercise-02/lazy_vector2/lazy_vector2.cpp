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
}

lazy_vector2::lazy_vector2(double value_a,
                           double value_b)
{
    this->x
        = value_a;
    this->y
        = value_b;
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

double lazy_vector2::get_angle()
const
{
    return atan2(this->y,
                 this->x) * degrees_by_radius;
}

double lazy_vector2::get_magnitude()
const
{
    return sqrt(this->x * this->x
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
    ostream_a << "{\n";
    ostream_a << "\t x: \'" << lazy_vector2_a.x << "\',\n";
    ostream_a << "\t y: \'" << lazy_vector2_a.y << "\',\n";
    ostream_a << "}\n";

    return ostream_a;
}