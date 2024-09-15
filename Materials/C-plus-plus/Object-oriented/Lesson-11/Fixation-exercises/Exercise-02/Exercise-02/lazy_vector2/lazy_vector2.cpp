#include <ostream>
#include <cmath>
#include "lazy_vector2.h"

using std::ostream;

const double radians_per_degree
    = (4.0 * atan(1.0)) / 180.0;
const double degrees_per_radian
    = 180.0 / (4.0 * atan(1.0));

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
    auto static x1
        = double{};
    auto static y1
        = double{};
    auto static x2
        = double{};
    auto static y2
        = double{};

    auto static new_magnitude
        = double{};
    auto static new_angle
        = double{};

    x1
        = this->get_x();
    y1
        = this->get_y();
    x2
        = lazy_vector2_a.get_x();
    y2
        = lazy_vector2_a.get_y();

    new_magnitude
        = sqrt((x1 + x2) * (x1 + x2)
               +
               (y1 + y2) * (y1 + y2));

    new_angle
        = atan2(y1 + y2,
                x1 + x2) * degrees_per_radian;

    return lazy_vector2(new_magnitude,
                        normalize_angle(new_angle));
}

lazy_vector2 lazy_vector2::operator-(const lazy_vector2& lazy_vector2_a)
const
{
    auto static x1
        = double{};
    auto static y1
        = double{};
    auto static x2
        = double{};
    auto static y2
        = double{};

    auto static new_magnitude
        = double{};
    auto static new_angle
        = double{};

    x1
        = this->get_x();
    y1
        = this->get_y();
    x2
        = lazy_vector2_a.get_x();
    y2
        = lazy_vector2_a.get_y();

    new_magnitude
        = sqrt((x1 - x2) * (x1 - x2)
               +
               (y1 - y2) * (y1 - y2));

    new_angle
        = atan2(y1 - y2,
                x1 - x2) * degrees_per_radian;

    return lazy_vector2(new_magnitude,
                        normalize_angle(new_angle));
}

lazy_vector2 lazy_vector2::operator-()
const
{
    return lazy_vector2(-magnitude,
                        normalize_angle(angle + 180.0));
}

lazy_vector2 lazy_vector2::operator*(double value_a)
const
{
    return lazy_vector2(value_a * magnitude,
                        angle);
}

double lazy_vector2::get_x()
const
{
    return this->magnitude * cos(this->angle * radians_per_degree);
}

double lazy_vector2::get_y()
const
{
    return this->magnitude * sin(this->angle * radians_per_degree);
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
    return lazy_vector2_a * value_a;
}

ostream& operator<<(ostream& ostream_a, const lazy_vector2& lazy_vector2_a)
{
    ostream_a << "{\n";
    ostream_a << "\t m: \'" << lazy_vector2_a.magnitude << "\',\n";
    ostream_a << "\t a: \'" << lazy_vector2_a.angle << "\',\n";
    ostream_a << "}\n";

    return ostream_a;
}