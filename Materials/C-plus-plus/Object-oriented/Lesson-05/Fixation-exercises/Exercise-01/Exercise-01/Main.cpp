/*
    [ description of the first fixation exercise ] :
        - Complete the implementation of the person class
        shown below. write a program that explores all the
        ways of creating objects and tests the different ways
        of displaying a person.

        ]
            #pragma once

            #include <string>

            using std::string;

            class c_person
            {
            public:
                c_person();
                c_person(const string& first_name, const string& last_name = "");

                void display_first_name();
                void display_first_and_last_name();

            private:
                string first_name;
                string last_name;
            };


        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] person_a.display_first_name();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - Joshua;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] person_b.display_first_name();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - Ryan;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] person_a.display_first_and_last_name();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - Joshua Karp;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] person_b.display_first_and_last_name();
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - Ryan Lewis;

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

#include "c_person.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto person_a
        = c_person
        (
            "Joshua",
            "Karp"
        );

    auto person_b
        = c_person
        {
            "Ryan",
            "Lewis"
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] person_a.display_first_name();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    person_a
        .display_first_name();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] person_b.display_first_name();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    person_b
        .display_first_name();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] person_a.display_first_and_last_name();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    person_a
        .display_first_and_last_name();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] person_b.display_first_and_last_name();" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    person_b
        .display_first_and_last_name();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}