#pragma once

#include <string>

using std::string;

class c_person
{
public:
    c_person()
    {
    };
    c_person(const string& first_name
                                    = "",
             const string& last_name
                                    = "")
    {
        this->first_name
            = first_name;
        this->last_name
            = last_name;
    };

    void display_first_name()
    const;

    void display_first_and_last_name()
    const;

private:
    string first_name;
    string last_name;
};

