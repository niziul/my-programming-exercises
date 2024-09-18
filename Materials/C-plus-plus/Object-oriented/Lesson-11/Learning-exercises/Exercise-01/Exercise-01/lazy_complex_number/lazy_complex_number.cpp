#include "lazy_complex_number.h"

lazy_complex_number::lazy_complex_number()
: value_a(0),
  value_b(0)
{
}

lazy_complex_number::lazy_complex_number(const double& value_a,
                                         const double& value_b)
: value_a(value_a),
  value_b(value_b)
{
}

lazy_complex_number lazy_complex_number::operator+(const lazy_complex_number& lazy_complex_number_a)
const
{
    return lazy_complex_number(this->value_a + lazy_complex_number_a.value_a,
                               this->value_b + lazy_complex_number_a.value_b);
}

lazy_complex_number lazy_complex_number::operator-(const lazy_complex_number& lazy_complex_number_a)
const
{
    return lazy_complex_number(this->value_a - lazy_complex_number_a.value_a,
                               this->value_b - lazy_complex_number_a.value_b);
}

lazy_complex_number lazy_complex_number::operator*(const lazy_complex_number& lazy_complex_number_a)
const
{
    return lazy_complex_number((this->value_a * lazy_complex_number_a.value_a)
                               -
                               (this->value_b * lazy_complex_number_a.value_b)
                               ,
                               (this->value_b * lazy_complex_number_a.value_a)
                               +
                               (this->value_a * lazy_complex_number_a.value_b)
                               );
}

lazy_complex_number operator*(const double& value_a, const lazy_complex_number& lazy_complex_number_a)
{
    return lazy_complex_number(value_a * lazy_complex_number_a.value_a,
                               value_a * lazy_complex_number_a.value_b);
}

lazy_complex_number operator~(const lazy_complex_number& lazy_complex_number_a)
{
    return lazy_complex_number(lazy_complex_number_a.value_a, -lazy_complex_number_a.value_b);
}

ostream& operator<<(ostream& ostream_a, const lazy_complex_number& lazy_complex_number_a)
{
    ostream_a << lazy_complex_number_a.value_a;
    ostream_a << std::showpos;
    ostream_a << lazy_complex_number_a.value_b;
    ostream_a << std::noshowpos;
    ostream_a << "i\n";

    return ostream_a;
}

istream& operator>>(istream& istream_a, lazy_complex_number& lazy_complex_number_a)
{
    auto static temp
        = char{};

    istream_a >> lazy_complex_number_a.value_a;
    istream_a >> temp;
    istream_a >> lazy_complex_number_a.value_b;
    istream_a >> temp;

    return istream_a;
}
