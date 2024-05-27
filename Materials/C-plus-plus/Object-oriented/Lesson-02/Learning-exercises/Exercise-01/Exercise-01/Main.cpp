/*
    [ description of the first learning exercise ] :
        - Implement the methods of a class to represent a bank
        account. the member data of the class should include the
        customer's name (string), the account number (an integer)
        and the balance (a floating point).

        the member functions must allow:
        
        a: create and initialize and object;
        b: display the account data;
        c: deposit money;
        d: withdraw money;

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] Bank("kygo", 36'590);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] bank.deposit(2'800);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - deposit of '2800' was successfully made!

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] bank.withdraw(4'250);
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - withdrawal of '4250' was successful!

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] bank.display()
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    name   : 'kygo';
                    id     : '4';
                    balance: 'US$35140';
            }

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include "bank.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] Bank(\"kygo\", 36'590);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto bank
        = Bank("kygo", 36'590);

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] bank.deposit(2'800);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    bank
        .deposit(2'800);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] bank.withdraw(4'250);" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    bank
        .withdraw(4'250);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] bank.display()" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    bank
        .display();

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}