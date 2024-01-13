/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            [ all values have been saved successfully.

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

int main()
{
    auto fout
        = ofstream{};

    auto size
        = 3;

    auto vector
        = new int[size]
        {
            38,
            42,
            -51,
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;
    
    fout
        .open("values.dat", ios_base::out
                            |
                            ios_base::binary);

    if (fout.is_open())
    {
        fout
            .write((char*)&size, sizeof(int));

        fout
            .write((char*)(vector + 0), sizeof(int) * size);

        fout
            .close();

        cout << "[ all values have been saved successfully." << endl;
    }
    else
    {
        cout << "- error when trying to open the file: \'values.dat\';" << endl;
    }

    /*if (fout.is_open())
    {
        fout
            .write((char*)&size, sizeof(int));

        for (auto i = 0; i < size; i++)
        {
            fout
                .write((char*)(vector + i), sizeof(int));
        }

        fout
            .close();

        cout << "[ all values have been saved successfully." << endl;
    }
    else
    {
        cout << "- error when trying to open the file: \'values.dat\';" << endl;
    }*/

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] vector;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}