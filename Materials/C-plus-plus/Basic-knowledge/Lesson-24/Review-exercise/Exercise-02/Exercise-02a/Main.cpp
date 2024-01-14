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

        modify the program obtained in the previous item to
        read and display the fish stored in the binary file
        before allowing the user to make a new entry.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] list of all fish found in the file
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ 'tilapia' - '300g' - '25cm';

            -

            [ 'dourado' - '250g' - '20cm';

            -

            [ 'carpa' - '400g' - '40cm';

            -

            [ 'sardinha' - '50g' - '10cm';

            -


            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] enter the information of a fish you want to save
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] name   : atum
            ] weight : 150
            ] length : 15

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ 'atum' - '150g' - '15cm'; successfully save ;

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
using std::ofstream;

using std::streamsize;
using std::numeric_limits;

struct st_fish
{
    char name[32];
    float weight;
    float length;
};

void get_fish_information_in_this(const char*);
void set_fish_information_in_this(const char*, st_fish&);

int main()
{
    st_fish fish;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    cout << endl;

    get_fish_information_in_this("fish.bin");

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

void get_fish_information_in_this(const char* file)
{
    st_fish fish;

    auto fin
        = ifstream{};

    fin
        .open(file, ios_base::in
                    |
                    ios_base::binary);

    if (fin.is_open())
    {
        cout << "] list of all fish found in the file" << endl;
        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

        cout << endl;

        while (fin.read((char*)&fish, sizeof(st_fish)))
        {
            cout << "[ \'" << fish.name << "\' - \'" << fish.weight << "g\' - \'" << fish.length << "cm\';" << endl;

            cout << endl;
            cout << "-" << endl;
            cout << endl;
        }

        cout << endl;

        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

        fin
            .close();
    }
    else
    {
        cout << "- error when trying to open the file: \'fish.bin\';" << endl;
    }
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
        cout << "- error when trying to open the file: \'fish.bin\';" << endl;
    }
}