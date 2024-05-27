#pragma once

#include <string>

using std::string;

class Bank
{
public:
    Bank(string client_name, float_t client_initial_balance)
    {
        name
            = client_name;

        id
            = client_name.length();

        balance
            = client_initial_balance;
    }

    ~Bank()
    {
        id
            = 0;
        balance
            = 0;
        name
            .clear();
    }
    void display();
    void deposit(float_t value);
    void withdraw(float_t value);

private:
    string name;
    int_fast16_t id;
    float_t balance;
};
