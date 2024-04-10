/*
    [ description of the first review exercise ] :
        - Write a function with the prototype below. it should
        replace all occurrences of the character 'c1' with 'c2'
        in the string str, returning the number of replacements
        made.

        ]
            ```cpp
                int subst(char* str, char c1, char c2);
            ```
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter a word below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : earth

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ word with the characters replaced
            {
                    'eorth';
            }
            [ number of replacements made
            {
                    '1';
            }

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

int replacesTheCharacters(char*, const char, const char);

int main()
{
    auto text
        = new char[20];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter a word below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin
        .getline(text, 20);

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto replacements
        = replacesTheCharacters(text,
                                'a',
                                'o');

    cout << "[ word with the characters replaced" << endl;
    
    cout << "{" << endl;
    cout << "\t\'" << text << "\';" << endl;
    cout << "}" << endl;

    cout << "[ number of replacements made" << endl;
    cout << "{" << endl;
    cout << "\t\'" << replacements << "\';" << endl;
    cout << "}" << endl;

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] text;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

int replacesTheCharacters(char* string, const char match, const char value)
{
    auto times
        = int{};

    do
    {
        if (*string == match)
        {
            times++;

            *string
                = value;
        }

    } while (*string++ != '\0');

    return times;
}
