/*
    [ description of the fourth learning exercise ] :
        - Build a 'real' class and a 'dollar' class to represent
        the brazilian currency and the american currency. make the
        classes store a conversion factor between the two currencies
        and make it possible to assign one currency to another by making
        the necessary conversions. the program below shows an example of
        use that should be supported by the classes.

        ]
            int main()
            {
                american_currency earnings = 100;           // convert int to american_currency
                                                            // 
                brazilian_currency wallet;                  // 
                wallet = earnings;                          // convert from american_currency to brazilian_currency
                cout << wallet << endl;                     // show value in brazilian_currency
                                                            // 
                wallet = wallet + american_currency{25};    // 
                cout << wallet << endl;                     // show value in brazilian_currency

            }
        ]

        overload the sum operator to add objects of type real only.


    [ output ] :
        ```
           <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] cout << "R$" << wallet << endl;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            R$500

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] wallet = wallet + lazy_american_currency{ 25 };
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ...

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] cout << "R$" << wallet << endl;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            R$625

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@> 
        ```
*/

#include <iostream>

#include "lazy_american_currency/lazy_american_currency.h"
#include "lazy_brazilian_currency/lazy_brazilian_currency.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto wallet
        = lazy_brazilian_currency
        {
            0
        };

    auto earnings
        = lazy_american_currency
        {
            100
        };

    wallet
        = earnings;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] cout << \"R$\" << wallet << endl;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "R$" << wallet << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] wallet = wallet + lazy_american_currency{ 25 };" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    wallet
        = wallet + lazy_american_currency{ 25 };

    cout << "..." << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] cout << \"R$\" << wallet << endl;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "R$" << wallet << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}