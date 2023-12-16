/*
    [ description of the second learning exercise ] :
        - Write a program that accepts text input until it finds
        the '@' char. The program should then use a switch statement
        to count the number of each vowel in the text. The text can contain
        letters, numbers, spaces and punctuation.

        ]
            type a sentence below ('@' to end)
            
            : yesterday i walked in heavy rain, it was 12 o'clock.@

            a - 5;
            e - 4;
            i - 4;
            o - 2;
            u - 0;
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            type a sentence below ('@' to end)
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : yesterday i walked in heavy rain, it was 12 o'clock.@

            -

            [ a - '5';
            [ e - '4';
            [ i - '4';
            [ o - '2';
            [ u - '0';

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;

using std::isalpha;
using std::tolower;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto input
        = char{};

    auto vowels
        = new int[5]
        {
            0, /*a*/
            0, /*e*/
            0, /*i*/
            0, /*o*/
            0  /*u*/
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "type a sentence below ('@' to end)" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << ": ";
    cin
        .get(input);

    input
        = tolower(input);

    while (input != '@')
    {
        if (isalpha(input))
        {
            switch (input)
            {
                case 'a':
                {
                    (*(vowels + 0))++;
                }
                break;
                case 'e':
                {
                    (*(vowels + 1))++;
                }
                break;
                case 'i':
                {
                    (*(vowels + 2))++;
                }
                break;
                case 'o':
                {
                    (*(vowels + 3))++;
                }
                break;
                case 'u':
                {
                    (*(vowels + 4))++;
                }
                break;
            }
        }

        cin
            .get(input);
        
        input
            = tolower(input);
    }

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "[ a - \'" << *(vowels + 0) << "\';" << endl;
    cout << "[ e - \'" << *(vowels + 1) << "\';" << endl;
    cout << "[ i - \'" << *(vowels + 2) << "\';" << endl;
    cout << "[ o - \'" << *(vowels + 3) << "\';" << endl;
    cout << "[ u - \'" << *(vowels + 4) << "\';" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] vowels;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}