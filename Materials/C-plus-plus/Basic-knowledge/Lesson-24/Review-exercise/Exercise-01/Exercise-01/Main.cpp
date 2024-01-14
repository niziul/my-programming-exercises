/*
    [ description of the first review exercise ] :
        - Build a program that reads an unknown number of fish
        from a text file called 'fish.txt' and displays the total
        number of kilos of fish caught. the file is formatted as in
        the example below: the name of the fish, the weight in grams
        and the length in centimeters.

        ]
            dourado 250 20
            tilapia 300 25
            carpa 400 40
            sardinha 50 10
            atum 150 15
            garfish 635.5 75
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            [ total weight of the fish caught: '1785.5kg';

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

using std::ifstream;

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto fin
        = ifstream{};

    auto total
        = float{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    cout << endl;

    fin
        .open("fish.txt");

    if (fin.is_open())
    {
        auto buffer
            = new char[32];

        do
        {
            auto weight
                = float{};
            
            fin >> buffer;

            fin >> weight;

            total
                += weight;

            fin >> buffer;

        } while (!fin.eof());

        delete[] buffer;
        
        fin
            .close();

        cout << "[ total weight of the fish caught: \'" << total << "kg\';" << endl;

    }
    else
    {
        cout << "- error when trying to open the file: \'fish.txt\';" << endl;
    }

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}
