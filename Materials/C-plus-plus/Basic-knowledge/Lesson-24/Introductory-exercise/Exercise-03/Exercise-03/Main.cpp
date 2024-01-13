/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] list of all the values found in the file
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ '38';
            [ '42';
            [ '-51';

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

using std::streamsize;
using std::numeric_limits;

int main()
{
    auto fin
        = ifstream{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;
    
    fin
        .open("values.dat", ios_base::in
                            |
                            ios_base::binary);

    if (fin.is_open())
    {
        auto size
            = int{};
        
        fin
            .read((char*)&size, sizeof(int));

        auto vector
            = new int[size];

        fin
            .read((char*)(vector + 0), sizeof(int) * size);

        fin
            .close();

        cout << "] list of all the values found in the file" << endl;
        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

        cout << endl;

        for (auto i = 0; i < size; i++)
        {
            cout << "[ \'" << *(vector + i) << "\';" << endl;
        }

        cout << endl;

        delete[] vector;

        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    }
    else
    {
        cout << "- error when trying to open the file: \'values.dat\';" << endl;
    }

    /*if (fin.is_open())
    {
        auto size
            = int{};
        
        fin
            .read((char*)&size, sizeof(int));

        auto vector
            = new int[size];

        for (auto i = 0; i < size; i++)
        {
            fin
                .read((char*)(vector + i), sizeof(int));
        }

        fin
            .close();

        cout << "] list of all the values found in the file" << endl;
        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

        cout << endl;
        
        for (auto i = 0; i < size; i++)
        {
            cout << "[ \'" << *(vector + i) << "\';" << endl;
        }

        cout << endl;

        delete[] vector;

        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    }
    else
    {
        cout << "- error when trying to open the file: \'values.dat\';" << endl;
    }*/

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}