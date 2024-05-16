/*
    [ description of the third learning exercise ] :
        - The function can be used to teach cout how to
        display variables of a type defined by the programmer.
        use references to build an operator '<<' function that
        displays a pair of elements on the screen. use the same
        type pair defined in question 4 of the fixation exercises.
        now build a program to read a text file containing and unknown
        number of space-separated pairs of numbers and display them with
        'cout', so that each pair is displayed as shown below:

        ]
            pairs: [2,4] [3,7] [8,5] [9,2]
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] all pairs found in the text file
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    x: '2'
                    y: '4'
            }

            {
                    x: '3'
                    y: '7'
            }

            {
                    x: '8'
                    y: '5'
            }

            {
                    x: '9'
                    y: '2'
            }


            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

using std::ostream;

using std::ios_base;

using std::ifstream;

using std::streamsize;
using std::numeric_limits;

struct st_pair
{
    int_fast16_t x;
    int_fast16_t y;
};

ostream& operator<<(ostream&, const st_pair&);

int main()
{
    auto fin
        = ifstream{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] all pairs found in the text file" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    fin
        .open("pairs.txt", ios_base::in);

    if (fin.is_open())
    {
        auto static pair
            = st_pair{};

        while (!fin.eof())
        {
            fin >> pair.x;
            fin >> pair.y;

            cout << pair;
        }

        fin
            .close();
    }

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

ostream& operator<<(ostream& r_ostream, const st_pair& c_r_pair)
{
    r_ostream << "{" << endl;
    r_ostream << "\tx: \'" << c_r_pair.x << "\'" << endl;
    r_ostream << "\ty: \'" << c_r_pair.y << "\'" << endl;
    r_ostream << "}" << endl;

    cout << endl;

    return r_ostream;
}
