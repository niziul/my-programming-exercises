#pragma once
class lazy_money
{
public:
    lazy_money(const double& value = 0);

    operator double()
    {
        return this->value;
    }

private:
    double value;
};

