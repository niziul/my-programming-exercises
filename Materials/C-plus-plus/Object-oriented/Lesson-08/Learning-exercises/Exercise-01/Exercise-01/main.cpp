/*
    [ description of the first learning exercise ] :
        - Build a program to find out if a word is a palindrome.
        one way to do this is to stack all the letters in the word
        and then unstack them one by one while analyzing whether the
        unstacked letters are the same as the letters in the original
        word.

        ]
            type a word: stack
            stacking and unstacking gets: kcats
            the word is not a palindrome.
        ]

    [ output ] :
        ```v1
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] enter a word below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : stack

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] stacking and unstacking gets:
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : kcats

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] result:
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - the word is not a palindrome.

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
        ```v2
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] enter a word below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : civic

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] stacking and unstacking gets:
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : civic

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] result:
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - the word is a palindrome.

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

#include "stack.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto is_a_palindrome
        = true;

    auto input
        = new char[32];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] enter a word below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin >> input;

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] stacking and unstacking gets:" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto stack_a
        = stack{};

    cout << ": ";

    for (size_t i = 0; i < strlen(input); i++)
    {
        stack_a
            .add(*(input + i));
    }

    for (size_t i = 0; i < strlen(input); i++)
    {
        auto static temp
            = char{};
        
        stack_a
            .remover(temp);

        cout << temp;

        if (!is_a_palindrome)
        {
            continue;
        }

        is_a_palindrome
            = *(input + i) == temp;
    }

    cout << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] result:" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    if (is_a_palindrome)
    {
        cout << "- the word is a palindrome." << endl;
    }
    else
    {
        cout << "- the word is not a palindrome." << endl;
    }

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] input;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}