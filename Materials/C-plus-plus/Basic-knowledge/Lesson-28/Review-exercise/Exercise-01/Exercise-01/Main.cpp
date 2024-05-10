/*
    [ description of the first review exercise ] :
        - Suppose that all the functions in a program need
        to access a global pointer called print. the pointer
        is defined in the main function and accessed by functions
        in other files. build the message() function in another source
        code file so that it uses print to get the output below:

        ]
            ```v1
            ] use normal print [y/n]
            : y

            ending program!
            ```

            ```v2
            ] use normal print [y/n]
            : n

            <<< ending program! >>>
            ```

            #include <iostream>

            using namespace std;

            void (*print)(const char[]);

            void message();

            void normal(const char text[]);
            void alternative(const char text[]);

            int main()
            {
                cout << "] use normal print [y/n]" << endl;
                cout << ": ";
                char option;
                cin >> option;

                if (option == 'y') print = normal;
                else print = alternative;
                message();
            }

            void normal(const char text[])
            {
                cout << text << endl;
            }

            void alternative(const char text[])
            {
                cout << "<<< " << text << " >>>" << endl;
            }
        ]

    [ output ] :
        ```v1
            <@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] use normal print [y/n]
            - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : y

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ending program!

            - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```

        ```v2
            <@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] use normal print [y/n]
            - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : n

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <<< ending program! >>>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

void (*print)(const char[]);

void message();

void normal(const char text[]);
void alternative(const char text[]);

int main()
{
    auto option
        = char{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] use normal print [y/n]" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin >> option;

    switch (option)
    {
    case 'y':
    case 'Y':
    {
        print
            = normal;
    }
    break;
    case 'n':
    case 'N':
    {
        print
            = alternative;
    }
    break;
    }
    
    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    message();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void normal(const char text[])
{
    cout << text << endl;
}

void alternative(const char text[])
{
    cout << "<<< " << text << " >>>" << endl;
}
