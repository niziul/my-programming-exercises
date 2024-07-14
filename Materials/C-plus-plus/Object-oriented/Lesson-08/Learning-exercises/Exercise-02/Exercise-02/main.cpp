/*
    [ description of the second learning exercise ] :
        - Build a program that reads a math expression as
        a string and checks that the bracket in the expression
        are correct, i.e. every open bracket must be closed. use
        a stack to solve the problem.

        ]
            expression: ((2+3)-5
            [error] bracket not closed;

            expression: (2+3)-5)
            [error] bracket was not opened;

            expression: ((2+3)-(5*4))
            [ok] bracket correct;
        ]

    [ output ] :
        ```v1
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] enter a math expression below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : ((2+3)-5

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] result
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [error] bracket not closed;

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
        ```v2
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] enter a math expression below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : (2+3)-5)

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] result
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [error] bracket was not opened;

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
        ```v3
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] enter a math expression below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : ((2+3)-(5*4))

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] result
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - [ok] bracket correct;

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

#include "stack.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto static const ref_open_bracket
        = '(';

    auto static const ref_closed_bracket
        = ')';

    auto open_brackets
        = uint8_t{};

    auto closed_brackets
        = uint8_t{};

    auto input
        = new char[32];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] enter a math expression below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin >> input;

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] result" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto stack_a
        = stack{};

    for (size_t i = 0; i < strlen(input); i++)
    {
        open_brackets
            += *(input + i) == ref_open_bracket ? 1 : 0;

        stack_a
            .add(*(input + i));
    }

    for (size_t i = 0; i < strlen(input); i++)
    {
        auto static temp
            = char{};

        stack_a
            .remover(temp);
        
        closed_brackets
            += temp == ref_closed_bracket ? 1 : 0;
    }

    if (open_brackets == closed_brackets)
    {
        cout << "- [ok] bracket correct;" << endl;
    }
    else
    {
        if (open_brackets > closed_brackets)
        {
            cout << "[error] bracket not closed;" << endl;
        }
        else
        {
            cout << "[error] bracket was not opened;" << endl;
        }
    }

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] input;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}
