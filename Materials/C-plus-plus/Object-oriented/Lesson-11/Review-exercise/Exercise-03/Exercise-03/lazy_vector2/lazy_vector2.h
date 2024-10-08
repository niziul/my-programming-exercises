#pragma once

#include <ostream>

using std::ostream;

class lazy_vector2
{
public:
    lazy_vector2();
    lazy_vector2(double value_a,
                 double value_b);

    double get_x()
    const;
    double get_y()
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
};