/*
    [ description of the first fixation exercise ] :
        - Build inline functions for the tasks below and write
        a program to test the functions. the function should be
        created with only one instruction on a single line.

        a: find the maximum between two numbers;
        b: find the minimum between two numbers;
        c: find the absolute value of a number;
        d: convert a character to uppercase;

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] inline int findTheMaximumBetweenThisTwoNumbers(int, int);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ; 9

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] inline int findTheMinimumBetweenThisTwoNumbers(int, int);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ; 7

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] inline int findTheAbsoluteOfThisNumber(int);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ; 7

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] inline char convertThisCharacterToUppercase(char);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ; L

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

inline int findTheMaximumBetweenThisTwoNumbers(int, int);
inline int findTheMinimumBetweenThisTwoNumbers(int, int);
inline int findTheAbsoluteOfThisNumber(int);
inline char convertThisCharacterToUppercase(char);

int main()
{

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] inline int findTheMaximumBetweenThisTwoNumbers(int, int);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "; " << findTheMaximumBetweenThisTwoNumbers(7, 9) << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] inline int findTheMinimumBetweenThisTwoNumbers(int, int);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "; " << findTheMinimumBetweenThisTwoNumbers(7, 9) << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] inline int findTheAbsoluteOfThisNumber(int);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "; " << findTheAbsoluteOfThisNumber(-7) << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] inline char convertThisCharacterToUppercase(char);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "; " << convertThisCharacterToUppercase('l') << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

inline int findTheMaximumBetweenThisTwoNumbers(int valueA, int valueB)
{
    return valueA > valueB ? valueA : valueB;
}

inline int findTheMinimumBetweenThisTwoNumbers(int valueA, int valueB)
{
    return valueA < valueB ? valueA : valueB;
}

inline int findTheAbsoluteOfThisNumber(int value)
{
    return abs(value);
}

inline char convertThisCharacterToUppercase(char value)
{
    return toupper(value);
}
