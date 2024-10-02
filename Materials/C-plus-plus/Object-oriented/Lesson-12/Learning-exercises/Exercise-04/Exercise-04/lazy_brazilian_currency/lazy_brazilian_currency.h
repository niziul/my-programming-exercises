#pragma once

#include "../lazy_american_currency/lazy_american_currency.h"

#include <ostream>

using std::ostream;

class lazy_brazilian_currency
{
public:
    lazy_brazilian_currency(const int& value = 0);

    lazy_brazilian_currency& operator=(const lazy_american_currency& lazy_american_currency_a);
    lazy_brazilian_currency& operator+(const lazy_american_currency& lazy_american_currency_a);

    friend ostream& operator<<(ostream& ostream_a, const lazy_brazilian_currency& lazy_brazilian_currency_a);

private:
    int value;

};