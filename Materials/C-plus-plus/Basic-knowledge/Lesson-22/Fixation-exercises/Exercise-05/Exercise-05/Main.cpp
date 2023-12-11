/*
    [ description of the fifth fixation exercise ] :
        - Write a program that displays a menu with 4 options, each
        labeled by a letter. If the user responds with a letter other
        than the four options, the program should ask the user to enter
        a valid option, until they do so. The program should use a switch
        to select and display a phrase in response to valid choice.

        ]
            system menu

            a) insert;
            b) remove;
            c) search;
            d) exit;

            choose: f
            invalid option
            
            choose: g
            invalid option

            choose: 5
            invalid option

            choose: a
            inserting elements...

            choose: b
            removing elements...

            choose: c
            searching for elements...

            bye!
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] system menu
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - a) insert;
            - b) remove;
            - c) search;
            - d) exit;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : f
            - invalid option.

            : g
            - invalid option.

            : 5
            - invalid option.

            : a
            [ inserting elements...

            : b
            [ removing elements...

            : c
            [ searching for elements...

            : d
            - bye.


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

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] system menu" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    cout << "- a) insert;" << endl;
    cout << "- b) remove;" << endl;
    cout << "- c) search;" << endl;
    cout << "- d) exit;" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    do
    {
        cout << ": ";
        cin >> input;

        input
            = tolower(input);

        switch (input)
        {
            case '1':
            case 'a':
            {
                cout << "[ inserting elements..." << endl;
            }
            break;
            case '2':
            case 'b':
            {
                cout << "[ removing elements..." << endl;
            }
            break;
            case '3':
            case 'c':
            {
                cout << "[ searching for elements..." << endl;
            }
            break;
            case '4':
            case 'd':
            {
                cout << "- bye." << endl;
            }
            break;
            default:
            {
                cout << "- invalid option." << endl;
            }
            break;
        }

        cout << endl;

    } while (input != 'd'
             &&
             input != '4');

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}