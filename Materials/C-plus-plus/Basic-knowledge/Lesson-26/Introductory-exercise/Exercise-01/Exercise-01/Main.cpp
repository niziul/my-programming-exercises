/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] '2' characters 'u' in 'uau!';
            ] '4' characters 'a' in 'ulalalala!';

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int getTheAmountOfTimeThatThisCharAppearsInThisString(char, const char*);

int main()
{
    auto surprised
        = "uau!";

    auto amazed
        = "ulalalala!";

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    auto amountOfCharU
        = getTheAmountOfTimeThatThisCharAppearsInThisString('u', surprised);

    auto amountOfCharA
        = getTheAmountOfTimeThatThisCharAppearsInThisString('a', amazed);
    
    cout << "] \'" << amountOfCharU << "\' characters \'u\' in \'" << surprised << "\';" << endl;
    cout << "] \'" << amountOfCharA << "\' characters \'a\' in \'" << amazed << "\';" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

int getTheAmountOfTimeThatThisCharAppearsInThisString(char t_char, const char* t_string)
{
    auto amount
        = int{};

    while (*t_string)
    {
        amount
            += *t_string++ == t_char;
    }

    return amount;
}
