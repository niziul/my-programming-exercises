#include "c_person.h"

#include <iostream>

using std::cout;
using std::endl;

void c_person
            ::display_first_name()
const
{
    cout << "- " << first_name << ";" << endl;
}

void c_person
            ::display_first_and_last_name()
const
{
    cout << "- " << first_name << " " << last_name << ";" << endl;
}
