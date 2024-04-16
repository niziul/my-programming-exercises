/*
    [ description of the first learning exercise ] :
        - Write a function that takes a string as a parameter
        and returns an integer value indicating how many words
        there are in the string. in the main program, read a string
        from the user to test the function. use const whenever appropriate.

        ]
            enter a sentence:
            it's hard to know everything these days.
            there are 7 words in this sentence!
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter a sentence below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : it's hard to know everything these days.

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ there are '7' words in this sentence!

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int getTheAmountOfWordsInThisString(const char*);

int main()
{
    auto string
        = new char[80];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter a sentence below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin
        .getline(string, 80);

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    auto amountOfWords
        = getTheAmountOfWordsInThisString(string);

    cout << "[ there are \'" << amountOfWords << "\' words in this sentence!" << endl;

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] string;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

int getTheAmountOfWordsInThisString(const char* string)
{
    auto amountOfWords
        = int{};

    do
    {
        if (*string == '\x20'
            ||
            (
            *string == '\x00'
            &&
            *(string - 1) != '\x20'
            ))
        {
            amountOfWords++;
        }

    } while (*string++ != '\x00');

    return amountOfWords;
}
