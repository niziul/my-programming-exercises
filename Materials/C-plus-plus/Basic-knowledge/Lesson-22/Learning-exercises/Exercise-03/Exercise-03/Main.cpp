/*
    [ description of the three learning exercise ] :
        - Create a 'meal' struct with the fields 'name' and 'price'. in
        the main function, create a vector of 'meals' of your choice. Show
        the menu of 'meals' to the user and ask them if they want to order something.
        While they are ordering, add value of the meal ordered to the total amount of
        the bill they will pay, ad show the menu again. When they want to finish their
        order, show the final bill with the total to pay.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] meal list
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            a) 'Tuna Melt'
                                                             US$'3.99'
            b) 'Bagel Pizza'
                                                             US$'5.99'
            c) 'Lasagna Soup'
                                                             US$'12.99'

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            -

            enter your order below ( 's' to finish )
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : a
            : a
            : b
            : c
            : s

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            [ total to pay: US$'26.96';
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;

using std::tolower;

using std::streamsize;
using std::numeric_limits;

struct meal
{
    char name[20];
    float price;
};

int main()
{
    auto input
        = char{};

    auto total
        = float{};

    auto meals
        = new meal[3]
        {
            meal
            {
                "Tuna Melt",
                3.99f
            },
            meal
            {
                "Bagel Pizza",
                5.99f
            },
            meal
            {
                "Lasagna Soup",
                12.99f
            },
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] meal list" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "a) \'" << (meals + 0)->name << "\'" << endl;
    cout << "\t\t\t\t\t\t US$\'" << (meals + 0)->price << "\'" << endl;
    cout << "b) \'" << (meals + 1)->name << "\'" << endl;
    cout << "\t\t\t\t\t\t US$\'" << (meals + 1)->price << "\'" << endl;
    cout << "c) \'" << (meals + 2)->name << "\'" << endl;
    cout << "\t\t\t\t\t\t US$\'" << (meals + 2)->price << "\'" << endl;

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    cout << "-" << endl;
    cout << endl;
    
    cout << "enter your order below ( 's' to finish )" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    cout << ": ";
    cin >> input;
    
    input
        = tolower(input);

    while (input != 's')
    {
        switch (input)
        {
            case 'a':
            {
                total
                    += (meals + 0)->price;
            }
            break;
            case 'b':
            {
                total
                    += (meals + 1)->price;
            }
            break;
            case 'c':
            {
                total
                    += (meals + 2)->price;
            }
            break;
        }

        cout << ": ";
        cin >> input;

        input
            = tolower(input);
    }

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "[ total to pay: US$\'" << total << "\';" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    delete[] meals;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}