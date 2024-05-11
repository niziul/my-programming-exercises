/*
    [ description of the second fixation exercise ] :
        - Considerer the struct model below:

        ]
            struct cash_register
            {
                char brand[40];
                float height;
                float width;
                float length;
                float volume;
            };
        ]

        a: write a function that receives a reference to
        a cash register and displays the value of each member.

        b: write a function that receives a reference to a cash
        register struct and modifies the volume member to the product
        of its dimensions.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            {
                    brand  : 'Royal POS1500cm';
                    height : '40.64cm';
                    width  : '43.18cm';
                    length : '30.48cm';
            }
            {
                    brand  : 'Sharp XEA102cm';
                    height : '41.66cm';
                    width  : '39.88cm';
                    length : '28.96cm';
            }

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - 'Royal POS1500' Volume: '53487.4cm³';
            - 'Sharp XEA102' Volume: '48114.2cm³';

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

struct st_cash_register
{
    char brand[40];
    float height;
    float width;
    float length;
    float volume;
};

void functionA(const st_cash_register&);
void functionB(st_cash_register&);

int main()
{
    auto cash_registers
        = new st_cash_register[2]
        {
            {
                "Royal POS1500",
                40.64f,
                43.18f,
                30.48f
            },
            {
                "Sharp XEA102",
                41.66f,
                39.88f,
                28.96f
            },
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    functionA(*(cash_registers + 0));
    functionA(*(cash_registers + 1));
    
    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    system("chcp 1252 > nul");

    functionB(*(cash_registers + 0));
    cout << "-\'" << (cash_registers + 0)->brand << "\' Volume: \'" << (cash_registers + 0)->volume << "cm³\';" << endl;

    functionB(*(cash_registers + 1));
    cout << "-\'" << (cash_registers + 1)->brand << "\' Volume: \'" << (cash_registers + 1)->volume << "cm³\';" << endl;

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] cash_registers;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void functionA(const st_cash_register& cash_register)
{
    cout << "{" << endl;
    cout << "\tbrand  : \'" << cash_register.brand << "cm\';" << endl;
    cout << "\theight : \'" << cash_register.height << "cm\';" << endl;
    cout << "\twidth  : \'" << cash_register.width << "cm\';" << endl;
    cout << "\tlength : \'" << cash_register.length << "cm\';" << endl;
    cout << "}" << endl;
}

void functionB(st_cash_register& cash_register)
{
    cash_register.volume
        = cash_register.height
          *
          cash_register.width
          *
          cash_register.length;
}
