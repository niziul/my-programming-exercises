/*
    [ description of the second review exercise ] :
        - Write a function that receives a vector and an integer
        value. the vector must be received via pointers that indicate
        the start and end of the range. the function must place the integer
        value in all the positions of the range. the integer value must be read
        from a binary file that only contains a number encoded as 32-bit integer.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] file name: value.bin

            -


            [ vector filled with the value '15';

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

using std::streamsize;
using std::numeric_limits;

void fillVector(int, int*, int*);

int main()
{
    auto vector
        = new int[8];

    auto value
        = int{};

    auto fileName
        = new char[32];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] file name: ";
    cin >> fileName;

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    auto fin
        = ifstream{};

    fin
        .open(fileName, ios_base::in
                        |
                        ios_base::binary);

    if (fin.is_open())
    {
        fin
            .read((char*)&value, sizeof(int));

        fin
            .close();
    }

    fillVector(value, vector, vector + 8);

    cout << endl;

    cout << "[ vector filled with the value \'" << value << "\';" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] vector;
    delete[] fileName;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void fillVector(int value, int* start, int* end)
{
    for (auto i = 0; end != (start + (++i));)
    {
        *(start + i)
            = value;
    }
}
