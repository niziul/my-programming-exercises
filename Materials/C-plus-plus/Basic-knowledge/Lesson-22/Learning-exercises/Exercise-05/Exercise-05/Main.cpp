/*
    [ description of the fifth learning exercise ] :
        - Crete a program that simulates a mini-calculator. this
        mini-calculator must receive two operands and operate them
        according to the chosen operator. the available operators should
        be addition, subtraction, multiplication and division, and the mini-
        calculator should be able to work with both intergers and decimals. the
        user must be able to choose which operation to perform and then enter the
        operands. they should also be able to perform as many operations as they like
        until they want to stop.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] mini-calculator
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            a) 'addition';
            b) 'subtraction';
            c) 'multiplication';
            d) 'division';

            ] enter the operation your want to perform below ( 's' to stop )
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : c

            ] 1 - input: 2
            ] 2 - input: 40

            [ result: '80';

            -

            a) 'addition';
            b) 'subtraction';
            c) 'multiplication';
            d) 'division';

            ] enter the operation your want to perform below ( 's' to stop )
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : s


            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;

using std::tolower;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto input
        = char{};

    auto result
        = double{};

    auto operands
        = new double[2];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] mini-calculator" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    do
    {
        cout << "a) \'addition\';" << endl;
        cout << "b) \'subtraction\';" << endl;
        cout << "c) \'multiplication\';" << endl;
        cout << "d) \'division\';" << endl;

        cout << endl;

        cout << "] enter the operation your want to perform below ( 's' to stop )" << endl;
        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
        cout << ": ";
        cin >> input;

        input
            = tolower(input);

        cout << endl;

        if (input == 's')
        {
            continue;
        }

        cout << "] 1 - input: ";
        cin >> *(operands + 0);
        cout << "] 2 - input: ";
        cin >> *(operands + 1);

        switch (input)
        {
            case '0':
            case '1':
            case 'a':
            {
                result
                    = *(operands + 0) + *(operands + 1);
            }
            break;
            case '2':
            case 'b':
            {
                result
                    = *(operands + 0) - *(operands + 1);
            }
            break;
            case '3':
            case 'c':
            {
                result
                    = *(operands + 0) * *(operands + 1);
            }
            break;
            case '4':
            case 'd':
            {
                result
                    = *(operands + 0) / *(operands + 1);
            }
            break;
        }

        cout << endl;

        cout << "[ result: \'" << result << "\';" << endl;

        cout << endl;
        cout << "-" << endl;
        cout << endl;

    } while (input != 's');

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    delete[] operands;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}