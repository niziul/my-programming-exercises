#include "lazy_brazilian_currency.h"

lazy_brazilian_currency::lazy_brazilian_currency(const int& value)
: value
{
    value
}
{
}

lazy_brazilian_currency& lazy_brazilian_currency::operator=(const lazy_american_currency& lazy_american_currency_a)
{
    this->value
        = this->value + (lazy_american_currency_a.get_value() * 5);

    return *this;
}

lazy_brazilian_currency& lazy_brazilian_currency::operator+(const lazy_american_currency& lazy_american_currency_a)
{
    this->value
        = this->value + (lazy_american_currency_a.get_value() * 5);

    return *this;
}

ostream& operator<<(ostream& ostream_a, const lazy_brazilian_currency& lazy_brazilian_currency_a)
{
    return ostream_a << lazy_brazilian_currency_a.value;
}
