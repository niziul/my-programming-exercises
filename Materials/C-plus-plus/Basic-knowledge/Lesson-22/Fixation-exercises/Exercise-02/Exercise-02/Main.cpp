/*
    [ description of the second fixation exercise ] :
            - Write a program that accepts text input until it finds
            the '@' char and displays all chars except digits, converting
            uppercase to lower case and the other way around.

            ] example-1
                        
                    Enter your text (@ to exit):

                    today we're going to program a lot @ more than yesterday.
                    TODAY WE'RE GOING TO PROGRAM A LOT
            ]

            ] example-2

                    Enter your text (@ to exit):

                    The 12 brave men fought
                    tHE BRAVE MEN FOUGHT

                    to the death in those 15 Minutes of Battle. @
                    TO THE DEATH IN THOSE mINUTES OF bATTLE.
            ]

    [ output ] :
            ``` ex-1
                <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

                Enter your text below ('@' to exit)
                - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
                : today we're going to program a lot @ more than yesterday.
                TODAY WE'RE GOING TO PROGRAM A LOT

                <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
            ```

            ``` ex-2
                <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

                Enter your text below ('@' to exit)
                - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
                : The 12 brave men fought
                tHE  BRAVE MEN FOUGHT
                to the death in those 15 Minutes of Battle. @
                TO THE DEATH IN THOSE  mINUTES OF bATTLE.

                <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
            ```
*/

#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;

using std::isalpha;
using std::isspace;
using std::islower;
using std::isupper;
using std::tolower;
using std::toupper;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto input
        = char{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
        
    cout << endl;

    cout << "Enter your text below ('@' to exit)" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin
        .get(input);

    while (input != '@')
    {
        if (isalpha(input)
            ||
            isspace(input))
        {
            if (islower(input))
            {
                input
                    = toupper(input);
            }
            else
            {
                input
                    = tolower(input);
            }

            cout << input;
        }

        cin
            .get(input);
    }
    
    cout << endl;
    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
        
    cin
            .ignore(numeric_limits<streamsize>::max(), '\n');
}
