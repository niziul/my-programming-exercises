/*
    [ description of the first learning exercise ] :
        - Function pointers can be used to simplify code that
        must choose one of several functions based on the value
        of a variable. for example, consider the code snippet below:

        ]
            switch(input)
            {
            case 0:
                functionA();
                break;
            case 0:
                functionB();
                break;
            case 2:
                functionC();
                break;
            case 3:
                functionD();
                break;
            }
        ]

        an alternative to the code above is to create a vector
        of pointers to functions, so that the value of the variable
        'input' is used to call the appropriate function:

        ]
            void (*pt_functions[])(void) = { functionA, functionB, functionC, functionD };

            (*pt_functions[input])();
        ]

        build a program that uses a vector of pointers to functions
        to implement the selection of a 'menu option'. each time the
        user makes a choice, an appropriate message should be displayed
        by a function.

        ]
            system menu

            1) insert;
            2) remove;
            3) search;
            4) exit;

            ; choose: 1
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] system menu
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            1) insert;
            2) remove;
            3) search;
            4) exit;

            ; choose: 1

            - the data has been entered successfully!

            ; choose: 2

            - the data was successfully removed!

            ; choose: 3

            - the searched data was not found.

            ; choose: 4

            - program ended successfully!


            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

void functionA();
void functionB();
void functionC();
void functionD();

typedef void (*menuFunctions[4])(void);

int main()
{
    auto ptFunctions
        = new menuFunctions
        {
            functionA,
            functionB,
            functionC,
            functionD,
        };

    auto input
        = int{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] system menu" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "1) insert;" << endl;
    cout << "2) remove;" << endl;
    cout << "3) search;" << endl;
    cout << "4) exit;" << endl;

    cout << endl;

    do
    {
        cout << "; choose: ";
        cin >> input;

        cout << endl;

        (*ptFunctions[input > 0
                      &&
                      input < 4
                      ?
                      input - 1
                      :
                      3])();

        cout << endl;

    } while (input != 4);

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] ptFunctions;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void functionA()
{
    cout << "- the data has been entered successfully!" << endl;
}

void functionB()
{
    cout << "- the data was successfully removed!" << endl;
}

void functionC()
{
    cout << "- the searched data was not found." << endl;
}

void functionD()
{
    cout << "- program ended successfully!" << endl;
}
