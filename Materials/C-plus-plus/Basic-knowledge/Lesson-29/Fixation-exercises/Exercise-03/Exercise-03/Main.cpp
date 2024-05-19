/*
    [ description of the third fixation exercise ] :
        - Using the code below as a starting point, complete
        the program by providing the functions described. note
        that there should be two 'show' functions, one for the
        'string' type and one for 'constant strings', each using
        standard arguments. use const in parameters when appropriate.
        the new operator should be used to allocate enough memory to store
        the text in the string struct.

        ]
            #include <iostream>
            #include <cstring>

            using namespace std;

            struct String
            {
                char* str;    // pointer to string;
                int length;   // string length (not counting '\0');
            };

            // prototypes for adjust(char*, String&), show(String&) and show(String&, int)

            int main()
            {
                String msg;
                char test[] = "Reality of pointers and strings\n";

                adjust(msg, test);

                show(msg);
                show(msg, 2);

                test[0] = "D";
                test[1] = "u";

                show(msg);
                show(msg, 3);

                show("Ready!");

                delete[] msg.str;

                return 0;
            }
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] display_string(string);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    'Reality of pointers and strings';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] display_string(string, 2);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    'Reality of pointers and strings';
                    'Reality of pointers and strings';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] display_string(text);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    'Duality of pointers and strings';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] display_string(text, 3);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    'Duality of pointers and strings';
                    'Duality of pointers and strings';
                    'Duality of pointers and strings';
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] display_string("Ready!");
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    'Ready!';
            }

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

struct st_string
{
    char* str;
    int_fast16_t length;
};

void adjust_string(st_string&, char*);
void display_string(const st_string&, int = 1);
void display_string(const char*, int = 1);

int main()
{
    auto string
        = st_string{};

    char text[]
        = "Reality of pointers and strings";

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    adjust_string(string, text);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] display_string(string);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    display_string(string);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] display_string(string, 2);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    display_string(string, 2);

    cout << endl;

    *(text + 0)
        = 'D';

    *(text + 1)
        = 'u';

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] display_string(text);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    display_string(text);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] display_string(text, 3);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    display_string(text, 3);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] display_string(\"Ready!\");" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    display_string("Ready!");

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] string.str;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void adjust_string(st_string& string, char* str)
{
    string
    .length
        = strlen(str);

    string
    .str
        = new char[string.length + 1];

    strcpy(string
           .str, str);
}

void display_string(const st_string& string, int amount)
{
    cout << "{" << endl;
    for (size_t i = 0; i < amount; i++)
    {
        cout << "\t\'" << string.str << "\';" << endl;
    }
    cout << "}" << endl;
}

void display_string(const char* string, int amount)
{
    cout << "{" << endl;
    for (size_t i = 0; i < amount; i++)
    {
        cout << "\t\'" << string << "\';" << endl;
    }
    cout << "}" << endl;
}
