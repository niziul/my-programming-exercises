/*
    [ description of the first fixation exercise ] :
        - Build a program that reads an unknown number of fish from
        a text file called "fisherman.txt" and displays the total amount
        of fish caught in kilos. The file is formatted as in the example
        below: the name of the fish, the weight in grams and the length in
        centimeters.

        ]
            ```txt
                dourado 250 20
                tilapia 300 25
                carpa 400 40
                sardinha 50 10
                atum 150 15
            ```
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] list of fish caught
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - - - - - fish ['1']:

            [ name   : dourado
            [ weight : 250kg
            [ length : 20cm

            - - - - - fish ['2']:

            [ name   : tilapia
            [ weight : 300kg
            [ length : 25cm

            - - - - - fish ['3']:

            [ name   : carpa
            [ weight : 400kg
            [ length : 40cm

            - - - - - fish ['4']:

            [ name   : sardinha
            [ weight : 50kg
            [ length : 10cm

            - - - - - fish ['5']:

            [ name   : atum
            [ weight : 150kg
            [ length : 15cm

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <fstream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

using std::vector;
using std::ifstream;

using std::streamsize;
using std::numeric_limits;

struct st_fish
{
    char name[32];
    int weight;
    int length;
};

int main()
{
    auto fstream
        = ifstream{};

    auto fishes
        = vector<st_fish>();

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] list of fish caught" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    fstream
        .open("fisherman.txt");
    
    if (fstream.is_open())
    {
        do
        {
            auto fish
                = st_fish{};
            
            fstream >> fish.name;
            fstream >> fish.weight;
            fstream >> fish.length;

            if (fstream.fail())
            {
                fstream
                    .clear();
                
                continue;
            }

            fishes
                .push_back(fish);
        
        } while (!fstream.eof());
    }
    else
    {
        cout << "- erro!" << endl;
    }

    fstream
        .close();

    auto index
        = int{};

    for (auto& fish : fishes)
    {
        cout << "- - - - - fish [\'" << ++index << "\']:" << endl;

        cout << endl;

        cout << "[ name   : " << fish.name << endl;
        cout << "[ weight : " << fish.weight << "kg" << endl;
        cout << "[ length : " << fish.length << "cm" << endl;
        
        cout << endl;
    }

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}