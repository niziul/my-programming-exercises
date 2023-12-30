/*
    [ output ] :
        ```
           <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter the name of the file you want open below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : points.txt

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ success opening file: 'points.txt';

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            [ end of the file reached;
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ read    ]: '12';
            [ sum     ]: '204.5';
            [ average ]: '17.0417';

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
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
    auto const buffer
        = 60;
    
    auto file_name
        = new char[buffer];

    auto file_stream
        = ifstream{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter the name of the file you want open below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin
        .getline(file_name, buffer);

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;
    
    file_stream
        .open(file_name);

    if (file_stream.is_open())
    {
        auto sum
            = double{};

        auto value
            = double{};

        auto amount
            = int{};

        cout << "[ success opening file: \'" << file_name << "\';" << endl;
        
        while (file_stream >> value)
        {
            amount++;

            sum
                += value;
        }

        cout << endl;

        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
        
        if (file_stream.eof())
        {
            cout << "[ end of the file reached;" << endl;
        }
        else
        {
            if (file_stream.fail())
            {
                cout << "[ wrong type of data in the input;" << endl;
            }
            else
            {
                cout << "[ entry closed for unknown reason;" << endl;
            }
        }

        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

        cout << endl;

        if (cout)
        {
            cout << "[ read    ]: \'" << amount << "\';" << endl;
            cout << "[ sum     ]: \'" << sum << "\';" << endl;
            cout << "[ average ]: \'" << sum / amount << "\';" << endl;
        }
        else
        {
            cout << "- no value was read." << endl;
        }
    }
    else
    {
        cout << "[ error opening file: \'" << file_name << "\';" << endl;
    }

    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    if (file_stream.is_open())
    {
        exit(EXIT_SUCCESS);

        file_stream
            .close();
    }
    else
    {
        exit(EXIT_FAILURE);
    }

    delete[] file_name;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}