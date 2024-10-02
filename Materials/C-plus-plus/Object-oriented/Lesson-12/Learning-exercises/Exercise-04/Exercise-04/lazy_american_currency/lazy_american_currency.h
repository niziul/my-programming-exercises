#pragma once

class lazy_american_currency
{
public:
    lazy_american_currency(const int& value = 0);

    int get_value()
    const
    {
        return this->value;
    }

private:
    int value;
};