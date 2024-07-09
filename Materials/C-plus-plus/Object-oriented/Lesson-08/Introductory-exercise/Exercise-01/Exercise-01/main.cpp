/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] stack_a.add('K');
            ] stack_a.add('C');
            ] stack_a.add('A');
            ] stack_a.add('T');
            ] stack_a.add('S');
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] while (!stack_a.empty())
            ] {
            ]     auto static temp = item{};
            ]     stack_a.remover(temp);
            ]     cout << temp << endl;
            ] }
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - S
            - T
            - A
            - C
            - K

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
    auto stack_a
        = stack{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] stack_a.add('K');" << endl;
    cout << "] stack_a.add('C');" << endl;
    cout << "] stack_a.add('A');" << endl;
    cout << "] stack_a.add('T');" << endl;
    cout << "] stack_a.add('S');" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    stack_a
        .add('K');
    stack_a
        .add('C');
    stack_a
        .add('A');
    stack_a
        .add('T');
    stack_a
        .add('S');

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] while (!stack_a.empty())" << endl;
    cout << "] {" << endl;
    cout << "]     auto static temp = item{};" << endl;
    cout << "]     stack_a.remover(temp);" << endl;
    cout << "]     cout << \"- \" << temp << endl;" << endl;
    cout << "] }" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    while (!stack_a.empty())
    {
        auto static temp
            = item{};

        stack_a
            .remover(temp);

        cout << "- " << temp << endl;
    }

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}