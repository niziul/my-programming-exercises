/*
    [ description of the fourth learning exercise ] :
        - A supermarket sells one unit of a product at its normal
        price, but from a certain quantity of products, it sells at
        a lower price, called the wholesale price. create a product
        struct to store the normal price of a product, its wholesale
        price and the quantity form which the wholesale price should
        e be used.

        build a function that receives a struct of type product and
        the quantity ordered of that product and returns the total to
        pay. the function must analyze whether to apply the normal price
        or the wholesale price according to the quantity ordered.

        use this function inside another function, whose task is to
        receive an array of products and an array of orders and return
        the order total. the main function must receive the products and
        the orders via two separate text files. the files contain the product
        information and the quantities ordered respectively, following the format
        below. the first number of each file is always the number of line of information.

        ]
            |products.txt              |orders.txt
            |                          |
            |6                         |6
            |N: 3.50 A: 2.95 Q: 5      |3
            |N: 9.80 A: 8.90 Q: 3      |4
            |N: 5.00 A: 4.00 Q: 5      |10
            |N: 7.85 A: 6.95 Q: 2      |5
            |N: 1.95 A: 1.50 Q: 8      |5
            |N: 4.90 A: 4.70 Q: 6      |8
            |                          |
        ]

        ; (N)ormal, (W)holesale, (Q)uantity required for wholesale price

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] grocery list
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] product - '1'
            {
                     ;normal price   : 'US$3.50';
                     ;wholesale price: 'US$2.95';
            }                                       - order   : '3';
            ] product - '2'
            {
                     ;normal price   : 'US$9.80';
                     ;wholesale price: 'US$8.90';
            }                                       - order   : '4';
            ] product - '3'
            {
                     ;normal price   : 'US$5.00';
                     ;wholesale price: 'US$4.00';
            }                                       - order   : '10';
            ] product - '4'
            {
                     ;normal price   : 'US$7.85';
                     ;wholesale price: 'US$6.95';
            }                                       - order   : '5';
            ] product - '5'
            {
                     ;normal price   : 'US$1.95';
                     ;wholesale price: 'US$1.50';
            }                                       - order   : '5';
            ] product - '6'
            {
                     ;normal price   : 'US$4.90';
                     ;wholesale price: 'US$4.70';
            }                                       - order   : '8';

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ total to pay: 'US$168.20'

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

using std::ios_base;
using std::ifstream;

using std::streamsize;
using std::numeric_limits;

auto const PRODUCTS_AMOUNT = 6;
auto const ORDERS_AMOUNT = 6;

struct st_product
{
    float normalPrice;
    float wholesalePrice;
    int wholesaleQuantity;
};

void getAllTheProductInformationFoundInThis(const char*, st_product*);
void getAllTheOrdersInformationFoundInThis(const char*, int*);

float returnTheTotalValueOfAllThesePurchasesBasedOnThis(const st_product*, const int*);
float returnTheTotalValueOfThisPurchaseBasedOnThis(const st_product*, const int*);

int main()
{
    auto products
        = new st_product[PRODUCTS_AMOUNT];

    auto orders
        = new int[ORDERS_AMOUNT];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] grocery list" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    getAllTheProductInformationFoundInThis("products.txt", products);
    getAllTheOrdersInformationFoundInThis("orders.txt", orders);

    for (auto i = 0; i < ORDERS_AMOUNT; i++)
    {
        cout << "] product - \'" << i + 1 << "\'" << endl;
        cout << "{" << endl;

        cout
            .setf(ios_base::fixed,
                  ios_base::floatfield);

        cout
            .precision(2);

        cout << "\t ;normal price   : \'US$" << (products + i)->normalPrice << "\';" << endl;
        cout << "\t ;wholesale price: \'US$" << (products + i)->wholesalePrice << "\';" << endl;

        cout
            .setf(ios_base::fixed,
                  ios_base::basefield);

        cout
            .precision(0);

        cout << "}\t\t\t\t\t- order   : \'" << *(orders + i) << "\';" << endl;
    }

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout
        .setf(ios_base::fixed,
              ios_base::floatfield);

    cout
        .precision(2);

    cout << "[ total to pay: \'US$" << returnTheTotalValueOfAllThesePurchasesBasedOnThis(products, orders) << "\'" << endl;

    cout
        .setf(ios_base::fixed,
              ios_base::basefield);

    cout
        .precision(0);

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] products;
    delete[] orders;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void getAllTheProductInformationFoundInThis(const char* c_textFileName, st_product* p_products)
{
    auto fin
        = ifstream{};

    fin
        .open(c_textFileName);

    if (fin.is_open())
    {
        auto temp
            = char{};

        for (auto i = 0; i < ORDERS_AMOUNT; i++)
        {
            fin >> temp;
            fin >> temp;

            fin >> (p_products)
                        ->normalPrice;

            fin >> temp;
            fin >> temp;

            fin >> (p_products)
                        ->wholesalePrice;

            fin >> temp;
            fin >> temp;

            fin >> (p_products)
                        ->wholesaleQuantity;

            p_products++;
        }

        fin
            .close();
    }
}

void getAllTheOrdersInformationFoundInThis(const char* c_textFileName, int* p_orders)
{
    auto fin
        = ifstream{};

    fin
        .open(c_textFileName);

    if (fin.is_open())
    {
        for (auto i = 0; i < ORDERS_AMOUNT; i++)
        {
            fin >> *p_orders++;
        }

        fin
            .close();
    }
}

float returnTheTotalValueOfAllThesePurchasesBasedOnThis(const st_product* cp_products, const int* cp_orders)
{
    auto totalValue
        = float{};

    for (auto i = 0; i < ORDERS_AMOUNT; i++)
    {
        totalValue
            += returnTheTotalValueOfThisPurchaseBasedOnThis(cp_products++,
                                                            cp_orders++);
    }

    return totalValue;
}

float returnTheTotalValueOfThisPurchaseBasedOnThis(const st_product* cp_product, const int* cp_order)
{
    return *cp_order > cp_product->wholesaleQuantity
           ?
           *cp_order * cp_product->wholesalePrice
           :
           *cp_order * cp_product->normalPrice;
}
