/*
    [ description of the first learning exercise ] :
        - The online supermarket abc sells 'lettuce' for US$1.25/lb,
        'beet' for US$0.65/lb and 'carrot' for US$0.90/lb. It gives a
        5% discount for orders over US$100.00 (calculated without the cost
        of sending the goods). The delivery cost is US$3.50 for orders of less
        than 5lb, US$10.00 for orders of 5lb up to 20lb, and US$8.00 plus US$0.10
        per lb for orders of 20lb or more.
        
        Write a program that allows a customer to place an order for
        vegetables. The algorithm should provide a menu with vegetables
        available and their prices:

        ]
            supermarket abc
            - - - - - - - -

            a) lettuce           US$ 1.25/lb
            b) beet              US$ 0.65/lb
            c) carrot            US$ 0.90/lb

            make your request below using the letters (a, b, c) and (s) to close:
        ]

        It must then read out an option until the customer closes the
        order: an answer 'a' must allow the user to enter the pounds of
        lettuce, 'b' the pounds of beet, 'c' the pounds of carrots and 's'
        must close the order. The algorithm should allow the user to correct
        the order as many times as they like before closing the order. If, for
        example, he presses the letter 'a' a second time, consider that the second
        entry is a correction of the amount of lettuce previously entered. The order
        should only be closed when the user types 's', until then the algorithm should
        accept orders and corrections indefinitely.

        When the user closes the order, the algorithm should show the
        total of orders, the discount (if there is one), the cost of delivery
        and the total to pay (including all costs and discounts).

        ]
            products            prices/lb           orders (lb)          partial total
            - - - - -           - - - - -           - - - - - -          - - - - - - -
            lettuce             US$ 1.25/lb         3.2lb                US$ 4.00
            beet                US$ 0.65/lb         6.0lb                US$ 3.90
            carrot              US$ 0.90/lb         10lb                 US$ 9.00
        ]

        If the user made the above request, the output would be:

        ]
            total order   :                                               US$ 16.90
            discounts     :                                               US$ 0.00
            delivery cost :                                               US$ 10.00
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            total payable :                                               US$ 26.90
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] supermarket abc
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            a) beet         US$ 0.65/lb
            b) carrot       US$ 0.90/lb
            c) lettuce      US$ 1.25/lb

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            make your request below using the letters (a, b, c) and (s) to close
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : b
            ] how many pounds of 'carrot' you want: 10.0

            : a
            ] how many pounds of 'beet' you want: 6.0

            : c
            ] how many pounds of 'lettuce' you want: 3.2

            : s

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ total order   :                                        US$'16.90';
            [ discounts     :                                        US$'0.00';
            [ delivery cost :                                        US$'10.00';
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            [ total payable :                                        US$'26.90';

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
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

const float beet_cost
                    = 0.65f;
const float carrot_cost
                    = 0.90f;
const float lettuce_cost
                    = 1.25f;

float get_delivery_value(float total);
float get_discount_value(float total);

int main()
{
    auto input
        = char{};

    auto total
        = float{};

    auto discount_value
        = float{};

    auto delivery_value
        = float{};

    auto amount_of_beet
        = float{};

    auto amount_of_carrot
        = float{};

    auto amount_of_lettuce
        = float{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] supermarket abc" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "a) beet    \tUS$ 0.65/lb" << endl;
    cout << "b) carrot  \tUS$ 0.90/lb" << endl;
    cout << "c) lettuce \tUS$ 1.25/lb" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;
    
    cout << "make your request below using the letters (a, b, c) and (s) to close" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << ": ";
    cin >> input;

    input
        = tolower(input);

    while (input != 's')
    {
        switch (input)
        {
            case '1':
            case 'a':
            {
                cout << "] how many pounds of \'beet\' you want: ";
                cin >> amount_of_beet;
                cout << endl;
            }
            break;
            case '2':
            case 'b':
            {
                cout << "] how many pounds of \'carrot\' you want: ";
                cin >> amount_of_carrot;
                cout << endl;
            }
            break;
            case '3':
            case 'c':
            {
                cout << "] how many pounds of \'lettuce\' you want: ";
                cin >> amount_of_lettuce;
                cout << endl;
            }
            break;
            default:
            {
                cout << "- invalid entry. try again." << endl;
                cout << endl;
            }
            break;
        }

        cout << ": ";
        cin >> input;

        input
            = tolower(input);
    }

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    total
        = amount_of_beet
          +
          amount_of_carrot
          +
          amount_of_lettuce;

    delivery_value
        = get_delivery_value(total);

    total
        = beet_cost * amount_of_beet
          +
          carrot_cost * amount_of_carrot
          +
          lettuce_cost * amount_of_lettuce;

    discount_value
        = get_discount_value(total);

    cout << endl;

    cout
        .setf(std::ios::fixed);

    cout
        .precision(2);

    cout << "[ total order   : \t\t\t\t\t US$\'" << total << "\';" << endl;
    cout << "[ discounts     : \t\t\t\t\t US$\'" << discount_value << "\';" << endl;
    cout << "[ delivery cost : \t\t\t\t\t US$\'" << delivery_value << "\';" << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    total
        += delivery_value
           +
           discount_value;

    cout << "[ total payable : \t\t\t\t\t US$\'" << total << "\';" << endl;

    cout
        .precision(0);

    cout
        .unsetf(std::ios::fixed);

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

float get_delivery_value(float total)
{
    if (total < 5.0f)
    {
        return 3.5f;
    }
    else if (total >= 5.0f
             &&
             total <= 20.0f)
    {
        return 10.0f;
    }
    else
    {
        return 8.0f + (0.10f * total);
    }

    return 0.0f;
}

float get_discount_value(float total)
{
    if (total > 100.0f)
    {
        return total * 0.05f;
    }

    return 0.0f;
}
