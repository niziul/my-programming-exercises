/*
    [ description of the fourth learning exercise ] :
        - Make a program that receives the price of a product and
        its origin code and shows its country of origin. The country
        of origin follows the table below:

        ]
            Origin Code         |       Country of Origin 
            - - - - - - - - - - - - - - - - - - - - - - -
            1 or 2              |       South
            3                   |       North
            4                   |       Midwest
            5 or 6              |       Northeast
            7 or 8 or 9         |       Southeast
        ]

        If the code entered by the user is not one of those specified
        above, display the message 'invalid code'.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            enter the product information below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] price       : 3.205
            ] origin code : 4

            -

            [ 'Midwest';

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto price
        = float{};
    
    auto origin_code
        = char{};
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "enter the product information below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    cout << "] price       : ";
    cin >> price;
    cout << "] origin code : ";
    cin >> origin_code;

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    switch (origin_code)
    {
        case '1':
        case '2':
        {
            cout << "[ \'South\';" << endl;
        }
        break;
        case '3':
        {
            cout << "[ \'North\';" << endl;
        }
        break;
        case '4':
        {
            cout << "[ \'Midwest\';" << endl;
        }
        break;
        case '5':
        case '6':
        {
            cout << "[ \'Northeast\';" << endl;
        }
        break;
        case '7':
        case '8':
        case '9':
        {
            cout << "[ \'Southeast\';" << endl;
        }
        break;
        default:
        {
            cout << "- invalid code." << endl;
        }
        break;
    }
    
    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}