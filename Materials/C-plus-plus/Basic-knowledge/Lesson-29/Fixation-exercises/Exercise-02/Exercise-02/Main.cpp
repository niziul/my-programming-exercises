/*
    [ description of the second fixation exercise ] :
        - Consider the struct model below:

        ]
            struct candy
            {
                char brand[24];
                double weight;
                int calories;
            }
        ]

        a) write a function that receives a reference to
        a candy struct, a pointer to char, a double and an
        int and uses the last three arguments as values of
        the struct, the last parameters must have the default
        values: "charge", "40.0", "187".

        b) write a function that receives a reference to
        a candy struct and displays its contents on the screen.
        use const whenever appropriate.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            {
                    brand    : 'charge';
                    weight   : '40g';
                    calories : '187kcal';
            }

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

struct st_candy
{
    char brand[24];
    double_t weight;
    int_fast16_t calories;
};

void function_a(st_candy&, const char* = "charge", const double_t = 40.0, const int_fast16_t = 187);
void function_b(const st_candy&);

int main()
{
    auto candy
        = st_candy{};
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    function_a(candy);
    function_b(candy);

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void function_a(st_candy& candy, const char* brand, const double_t weight, const int_fast16_t calories)
{
    strcpy_s(candy.brand, brand);

    candy
    .weight
        = weight;

    candy
    .calories
        = calories;
}

void function_b(const st_candy& candy)
{
    cout << "{" << endl;;
    cout << "\tbrand    : \'" << candy
                                 .brand << "\';" << endl;
    cout << "\tweight   : \'" << candy
                                 .weight << "g\';" << endl;
    cout << "\tcalories : \'" << candy
                                 .calories << "kcal\';" << endl;
    cout << "}" << endl;;
}
