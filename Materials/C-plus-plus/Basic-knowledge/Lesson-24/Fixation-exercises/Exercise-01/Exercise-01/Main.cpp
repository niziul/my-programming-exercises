/*
    [ description of the first fixation exercise ] :
        - Write a program that reads an integer value form the
        user and stores it in binary file called 'integer.bin'.
        on entry, the program should check whether the file 'integer.bin'
        exists, and if so, it should read and display the number on the screen.

        ]example - 01
            
            ```txt
                enter an integer: 43
                number stored in the file 'integer.bin'
            ```
        ]

        ]example - 02
            
            ```txt
                'integer.bin' file found!
                it contains the number 43.

                enter an integer: 52
                number stored in the file 'integer.bin'
            ```
        ]

    [ output ] :
        ```
        <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

        - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        [ 'integer.bin' file contains the number: '43';
        - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

        ] enter a integer below
        - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        : 52

        -

        - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

        [ number stored in the file 'integer.bin';

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

void create_binary_file();

void get_integer_in_this_binary(const char*);
void set_integer_in_this_binary(const char*, const int*);

int main()
{
    auto input
        = int{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    get_integer_in_this_binary("integer.bin");

    cout << endl;

    cout << "] enter a integer below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin >> input;

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;
    
    set_integer_in_this_binary("integer.bin", &input);

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void create_binary_file()
{
    ofstream fout{};

    fout
        .open("integer.bin", ios_base::out
                             |
                             ios_base::binary);

    if (fout.is_open())
    {
        fout
            .close();
    }
}

void get_integer_in_this_binary(const char* file)
{
    ifstream fin;

    fin
        .open(file, ios_base::in
                    |
                    ios_base::binary);

    if (fin.is_open())
    {
        auto value
            = int{};

        fin
            .read((char*)&value, sizeof(int));

        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
        cout << "[ \'" << file << "\' file contains the number: \'" << value << "\';" << endl;
        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    }
    else
    {
        create_binary_file();
    }
}

void set_integer_in_this_binary(const char* file, const int* integer)
{
    ofstream fout;

    fout
        .open(file, ios_base::out
                    |
                    ios_base::binary);

    if (fout.is_open())
    {
        fout
            .write((char*)integer, sizeof(int));

        cout << "[ number stored in the file \'" << file << "\';" << endl;

        fout
            .close();
    }
}
