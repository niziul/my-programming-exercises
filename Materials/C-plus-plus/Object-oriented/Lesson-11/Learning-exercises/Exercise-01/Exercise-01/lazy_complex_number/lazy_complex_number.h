#pragma once

#include <ostream>
#include <istream>

using std::ostream;
using std::istream;

class lazy_complex_number
{
public:
    lazy_complex_number();
    lazy_complex_number(const double& value_a,
                        const double& value_b);

    lazy_complex_number operator+(const lazy_complex_number& lazy_complex_number_a)
    const;
    lazy_complex_number operator-(const lazy_complex_number& lazy_complex_number_a)
    const;
    lazy_complex_number operator*(const lazy_complex_number& lazy_complex_number_a)
    const;

    friend lazy_complex_number operator*(const double& value_a, const lazy_complex_number& lazy_complex_number_a);
    friend lazy_complex_number operator~(const lazy_complex_number& lazy_complex_number_a);

    friend ostream& operator<<(ostream& ostream_a, const lazy_complex_number& lazy_complex_number_a);
    friend istream& operator>>(istream& istream_a, lazy_complex_number& lazy_complex_number_a);

private:
    double value_a;
    double value_b;
};

