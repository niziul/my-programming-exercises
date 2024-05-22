/*
    [ description of the second learning exercise ] :
        - Write overloaded functions to display integer numbers,
        floating-point numbers and constant strings. each type should
        be displayed in a different color, so that the code below generates
        the following output:

        ]
            int main()
            {
                cout << "integer: ";
                print(45);
                cout << "\nfloating-point:";
                print(3.9);
                cout << "\nstring:";
                print("hello world");
                cout << "\n";
            }
        ]

        ]
            integer: 45
            floating-point: 3.9
            string: hello world
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] display_content(45);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    45
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] display_content(3.9f);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    3.9
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] display_content("hello world");
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    hello world
            }

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

void display_content(const float& content);
void display_content(const char* content);
void display_content(const int& content);

int main()
{
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] display_content(45);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    display_content(45);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] display_content(3.9f);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    display_content(3.9f);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] display_content(\"hello world\");" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    display_content("hello world");

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void display_content(const float& content)
{
    cout << "{" << endl;
    cout << "\t\u001b[36m" << content << "\u001b[0m" << endl;
    cout << "}" << endl;
}

void display_content(const char* content)
{
    cout << "{" << endl;
    cout << "\t\u001b[31m" << content << "\u001b[0m" << endl;
    cout << "}" << endl;
}

void display_content(const int& content)
{
    cout << "{" << endl;
    cout << "\t\u001b[33m" << content << "\u001b[0m" << endl;
    cout << "}" << endl;
}
