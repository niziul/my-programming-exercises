/*
    [ description of the third review exercise ] :
        - Build a program tht reads an unknown number of fish
        from a text file (similar to the file used in the first
        question) and writes this information to a binary file that
        can be read by the program in the second question. compare the
        size of the text and binary files.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] a total of '6' fish were found in the text file;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] all the fish were successfully saved in the binary file;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            -

            ] list of all fish found in the binary file;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ 'dourado' - '250g' - '20cm';

            [ 'tilapia' - '300g' - '25cm';

            [ 'carpa' - '400g' - '40cm';

            [ 'sardinha' - '50g' - '10cm';

            [ 'atum' - '150g' - '15cm';

            [ 'garfish' - '635.5g' - '75cm';

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <fstream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

using std::vector;

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

auto list_of_fish
    = vector<st_fish>();

void get_fish_information_in_this_text(const char*);

void get_fish_information_in_this_binary(const char*);
void set_fish_information_in_this_binary(const char*, st_fish&);

int main()
{
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    get_fish_information_in_this_text("fish.txt");
    
    cout << endl;

    cout << "] a total of \'" << list_of_fish.size() << "\' fish were found in the text file;" << endl;
    
    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    for (auto& fish : list_of_fish)
    {
        set_fish_information_in_this_binary("fish.bin", fish);
    }

    list_of_fish
        .clear();
    
    cout << "] all the fish were successfully saved in the binary file;" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    cout << "-" << endl;
    cout << endl;
    
    cout << "] list of all fish found in the binary file;" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    get_fish_information_in_this_binary("fish.bin");

    for (auto& fish : list_of_fish)
    {
        cout << "[ \'" << fish.name << "\' - \'" << fish.weight << "g\' - \'" << fish.length << "cm\';" << endl;
        
        cout << endl;
    }

    list_of_fish
        .clear();

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void get_fish_information_in_this_text(const char* file)
{
    auto fin
        = ifstream{};

    fin
        .open(file, ios_base::in);

    if (fin.is_open())
    {
        st_fish fish;
        
        do
        {
            fin >> fish.name;
            fin >> fish.weight;
            fin >> fish.length;

            list_of_fish
                .push_back(fish);

        } while (!fin.eof());

        fin
            .close();
    }
    else
    {
        cout << "- error when trying to open the file: \'" << file << "\';" << endl;
    }
}

void get_fish_information_in_this_binary(const char* file)
{
    auto fin
        = ifstream{};

    fin
        .open(file, ios_base::in
                    |
                    ios_base::binary);

    if (fin.is_open())
    {
        st_fish fish;

        while (fin.read((char*)&fish, sizeof(st_fish)))
        {
            list_of_fish
                .push_back(fish);
        }

        fin
            .close();
    }
    else
    {
        cout << "- error when trying to open the file: \'" << file << "\';" << endl;
    }
}

void set_fish_information_in_this_binary(const char* file, st_fish& fish)
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