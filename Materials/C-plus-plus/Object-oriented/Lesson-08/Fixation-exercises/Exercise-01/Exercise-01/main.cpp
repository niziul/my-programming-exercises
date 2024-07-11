/*
    [ description of the first fixation exercise ] :
        - Modify the declaration of the stack class shown
        below so that it uses a dynamic array instead of a
        static array. the number of elements must be passed
        in the stack's constructor. it should not have a default
        constructor, i.e. it should not be possible to create a stack
        without indicating its capacity. create a destructor to free the
        dynamically allocated memory.

        create a program to test the new class.

        ]
            class stack
            {
            public:
                stack();

                const bool empty()
                const;
                const bool full()
                const;

                bool add(const item& item_a);
                bool remover(item& item_a);

            private:
                enum
                {
                    max = 10
                };

                item items[max];
                int top;
            };
        ]

        challenge: modify the stack class so that its
        capacity expands automatically whenever the stack
        operation is performed with a full stack. also make
        following changes:

        a: remove the full() method;
        b: modify the add() method to return avoid;
        c: add a default constructor that creates an empty stack;


    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] stack_a.add('K');
            ] stack_a.add('C');
            ] stack_a.add('A');
            ] stack_a.add('T');
            ] stack_a.add('S');
            ] stack_a.add('6');
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] while (!stack_a.empty())
            ] {
            ]     auto static temp = item{};
            ]     stack_a.remover(temp);
            ]     cout << "- " << temp << endl;
            ] }
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - 6
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
    cout << "] stack_a.add('6');" << endl;
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
    stack_a
        .add('6');

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