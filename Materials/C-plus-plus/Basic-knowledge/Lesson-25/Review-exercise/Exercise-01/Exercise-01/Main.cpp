/*
    [ description of the first review exercise ] :
        - Write a function that receives a vector of doubles and
        returns the value of the largest element in the vector. the
        function must not alter the contents of the vector. use the
        function to find the largest value in a text file. the file
        contains any number of floating-point values separated by spaces,
        tabs, or line jumps.

        ]
            file name: values.txt
            
            largest value is 9.9
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] file name: values.txt

            -

            [ largest value is: '9.9';

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

using std::streamsize;
using std::numeric_limits;

vector<double> getAllNumbersInThisFile(char*);
double getLargestElementInTheVector(const vector<double>);

int main()
{
    auto fileName
        = new char[32];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] file name: ";
    cin >> fileName;

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    auto elements
        = getAllNumbersInThisFile(fileName);

    cout << "[ largest value is: \'" << getLargestElementInTheVector(elements) << "\';" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] fileName;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

vector<double> getAllNumbersInThisFile(char* file)
{
    auto values
        = vector<double>();

    auto fin
        = ifstream{};

    fin
        .open(file, ios_base::out);

    if (fin.is_open())
    {
        auto value
            = double{};

        while (!fin.eof())
        {
            fin >> value;

            values
                .push_back(value);
        }

        fin
            .close();
    }

    return values;
}

double getLargestElementInTheVector(const vector<double> elements)
{
    auto largestElement
        = double{};

    for (auto i = 0; i < elements.size(); ++i)
    {
        if (*(elements.begin() + i) > largestElement)
        {
            largestElement
                = *(elements.begin() + i);
        }
    }

    return largestElement;
}
