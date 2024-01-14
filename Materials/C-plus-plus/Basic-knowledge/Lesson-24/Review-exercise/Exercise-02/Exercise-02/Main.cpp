/*
    [ description of the second review exercise ] :
        - use the fish struct defined below:

        ]
            struct fish
            {
                char name[20];
                unsigned weight;
                float length;
            };
        ]

        build a program that reads the data of a single fish
        from the user and saves it in a binary file. each run
        of the program should add a fish to the file.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter the information about the fish your want to save
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] name   : dourado
            ] weight : 250
            ] length : 20

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ 'dourado' - '250g' - '20cm'; successfully save ;

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

using std::ofstream;

using std::streamsize;
using std::numeric_limits;

struct st_fish
{
    char name[32];
    float weight;
    float length;
};

void set_fish_information_in_this(const char*, st_fish&);

int main()
{
    st_fish fish;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    cout << endl;
    
    cout << "] enter the information of a fish you want to save" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "] name   : ";
    cin >> fish.name;

    cout << "] weight : ";
    cin >> fish.weight;

    cout << "] length : ";
    cin >> fish.length;

    set_fish_information_in_this("fish.bin", fish);
    
    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
   
    cout << endl;

    cout << "[ \'" << fish.name << "\' - \'" << fish.weight << "g\' - \'" << fish.length << "cm\'; successfully save ;" << endl;

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void set_fish_information_in_this(const char* file, st_fish& fish)
{
    auto fout
        = ofstream{};

    fout
        .open(file, ios_base::out
                    |
                    ios_base::app
                    |
                    ios_base::binary);

    if (fout.is_open())
    {
        fout
            .write((char*)&fish, sizeof(st_fish));
        
        fout
            .close();
    }
    else
    {
        cout << "- error when trying to open the file: \'" << file << "\';" << endl;
    }
}
