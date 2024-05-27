#include <iostream>
#include "bank.h"

using std::cout;
using std::endl;

void Bank::display()
{
    cout << "{" << endl;
    cout << "\tname   : \'" << this->name << "\';" << endl;
    cout << "\tid     : \'" << this->id << "\';" << endl;
    cout << "\tbalance: \'US$" << this->balance << "\';" << endl;
    cout << "}" << endl;
}

void Bank::deposit(float_t value)
{
    this->balance += value;

    cout << "- deposit of \'" << value << "\' was successfully made!" << endl;
}

void Bank::withdraw(float_t value)
{
    this->balance -= value;

    cout << "- withdrawal of \'" << value << "\' was successful!" << endl;
}
