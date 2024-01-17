/*
    [ description of the second fixation exercise ] :
        - Build a program that reads a sequence of integers from
        the user until the number zero is read. the numbers should
        be stored in a binary file called 'values.bin'. the first number
        in the file must be the number of numbers entered. at program entry,
        check if the file exists and, if so, display the values in the vector.

        ]
            ```sample 01
                enter the values below (type '0' to finish)
                50 82 45 31 94 22 0

                '6' number were stored in the 'values.bin' file.
            ```

            ```sample 02
                the 'values.bin' file contains the following values:
                50 82 45 31 94 22 0

                enter the values below (type '0' to finish)
                83 40 29 0

                '6' number were stored in the 'values.bin' file.
            ```
        ]

        tip: as we don't know in advance how many numbers will
        be entered, we can save the number zero as the first number
        in the file, save each number entered by the user and then return
        to the start of the file, using the seekp() function to overwrite
        zero with the correct value.

        the command below positions the file's write pointer (put) at position
        0 from its start (ios_base::beg).

        ]
            ```c++
                fout.seekp(0, ios_base::beg);
            ```
        ]

    [ output ] :
        ```
            ```out - 01
                <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>


                ] enter the values below (type '0' to finish)
                - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

                : 50
                : 82
                : 45
                : 31
                : 94
                : 22
                : 0
                - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

                -

                [ '6' number were stored in the 'values.bin' file.

                <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
            ```

            ```out - 02
                <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

                - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
                [ the 'values.bin' file contains the following values:
                - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

                [ '50';
                [ '82';
                [ '45';
                [ '31';
                [ '94';
                [ '22';

                - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

                ] enter the values below (type '0' to finish)
                - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

                : 83
                : 40
                : 29
                : 0
                - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

                -

                [ '3' number were stored in the 'values.bin' file.

                <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
            ```
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

void create_binary_file();

void get_numbers_in_this_binary(const char*, vector<int>&);
void set_numbers_in_this_binary(const char*, vector<int>&);

int main()
{
    auto input
        = int{};

    auto values
        = vector<int>();

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    get_numbers_in_this_binary("values.bin", values);

    if (values.size() > 0)
    {
        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
        cout << "[ the \'values.bin\' file contains the following values: " << endl;
        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

        cout << endl;

        for (auto& value : values)
        {
            cout << "[ \'" << value << "\';" << endl;
        }

        cout << endl;

        values
            .clear();

        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    }

    cout << endl;
    
    cout << "] enter the values below (type '0' to finish) " << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << ": ";
    cin >> input;

    while (input != 0)
    {
        values
            .push_back(input);

        cin >> input;
    }

    set_numbers_in_this_binary("values.bin", values);

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "[ \'" << values.size() << "\' number were stored in the 'values.bin' file." << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    values
        .clear();

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}


void create_binary_file()
{
    ofstream fout{};

    fout
        .open("values.bin", ios_base::out
                            |
                            ios_base::binary);

    if (fout.is_open())
    {
        auto value
            = int{};

        fout
            .write((char*)&value, sizeof(int));

        fout
            .close();
    }
}

void get_numbers_in_this_binary(const char* file, vector<int>& numbers)
{
    ifstream fin{};

    fin
        .open(file, ios_base::in
                    |
                    ios_base::binary);

    if (fin.is_open())
    {
        auto value
            = int{};

        auto amount
            = int{};

        fin
            .read((char*)&amount, sizeof(int));

        for (auto i = 0; i < amount; i++)
        {
            fin
                .read((char*)&value, sizeof(int));

            numbers
                .push_back(value);
        }

        fin
            .close();
    }
    else
    {
        create_binary_file();
    }
}

void set_numbers_in_this_binary(const char* file, vector<int>& values)
{
    ofstream fout{};

    fout
        .open(file, ios_base::out
                    |
                    ios_base::binary);

    if (fout.is_open())
    {
        auto size
            = (int)values.size();
        
        fout
            .write((char*)&size, sizeof(int));
        
        for (const auto& value : values)
        {
            fout
                .write((char*)&value, sizeof(int));
        }

        fout
            .close();
    }
}