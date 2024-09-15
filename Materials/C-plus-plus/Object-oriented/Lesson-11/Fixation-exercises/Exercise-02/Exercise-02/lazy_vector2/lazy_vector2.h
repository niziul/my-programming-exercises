#pragma once

#include <ostream>

using std::ostream;

class lazy_vector2
{
public:
    lazy_vector2();
    lazy_vector2(double magnitude,
                 double angle);

    double get_x()
    const;
    double get_y()
    const;

    double get_magnitude()
    const;
    double get_angle()
    const;

    lazy_vector2 operator+(const lazy_vector2& lazy_vector2_a)
    const;
    lazy_vector2 operator-(const lazy_vector2& lazy_vector2_a)
    const;

    lazy_vector2 operator-()
    const;
    lazy_vector2 operator*(double value_a)
    const;

    friend lazy_vector2 operator*(const double& value_a, const lazy_vector2& lazy_vector2_a);
    friend ostream& operator<<(ostream& ostream_a, const lazy_vector2& lazy_vector2_a);

private:
    double magnitude;
    double angle;

    double normalize_angle(double angle)
    const
    {
        while (angle < 0)
        {
            angle
                += 360;
        }
        while (angle >= 360)
        {
            angle
                -= 360;
        }

        return angle;
    }
};