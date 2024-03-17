/*
    [ description of the second learning exercise ] :
        - Build a program that reads a list of up to 100 numbers
        from a text file and stores them in a vector. The program
        must pass the vector to a function that must find and return
        the smallest element, the largest element, and their respective
        positions within the vector. define a strut to be the function's
        return type. use const in the function parameters whenever possible.

        ]
            file: numbers.txt

            ] position 30° contains the smallest number (3);
            ] position 12° contains the largest number (98);
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            [ enter the name of the file with the 100 numbers below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : numbers.txt

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] position '0th' contains the smallest number: (1);
            ] position '63th' contains the largest number: (100);

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

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

struct st_largest_element_info
{
    unsigned short element;
    unsigned short position;
};

struct st_smallest_element_info
{
    unsigned short element;
    unsigned short position;
};

vector<int> returnAnVectorWithAllTheNumbersFoundInThisFile(const char*);

st_largest_element_info returnTheLargestElementInformationOfThisVector(const vector<int>);
st_smallest_element_info returnTheSmallestElementInformationOfThisVector(const vector<int>);

int main()
{
    auto fileName
        = new char[32];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "[ enter the name of the file with the 100 numbers below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin >> fileName;

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    auto allTheNumbers
        = returnAnVectorWithAllTheNumbersFoundInThisFile(fileName);

    auto largestElementInformation
        = returnTheLargestElementInformationOfThisVector(allTheNumbers);

    auto smallestElementInformation
        = returnTheSmallestElementInformationOfThisVector(allTheNumbers);

    cout << endl;
    
    cout << "] position \'" << smallestElementInformation.position << "th\' contains the smallest number: (" << smallestElementInformation.element << ");" << endl;
    cout << "] position \'" << largestElementInformation.position << "th\' contains the largest number: (" << largestElementInformation.element << ");" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] fileName;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

vector<int> returnAnVectorWithAllTheNumbersFoundInThisFile(const char* fileName)
{
    auto allTheNumbers
        = vector<int>();

    auto fin
        = ifstream{};

    fin
        .open(fileName, ios_base::in);

    if (fin.is_open())
    {
        auto value
            = int{};

        for (auto i = 0; fin.eof() != true || i < 100; i++)
        {
            fin >> value;

            allTheNumbers
                .push_back(value);
        }

        fin
            .close();
    }

    return allTheNumbers;
}

st_largest_element_info returnTheLargestElementInformationOfThisVector(const vector<int> i_vector)
{
    auto elementInformation
        = st_largest_element_info
        {
            (unsigned short)i_vector[0],
            (unsigned short)0,
        };

    for (auto i = 0; i < i_vector.size(); i++)
    {
        if (i_vector[i] > elementInformation.element)
        {
            elementInformation.element
                = (unsigned short)i_vector[i];

            elementInformation.position
                = (unsigned short)i;
        }
    }

    return elementInformation;
}

st_smallest_element_info returnTheSmallestElementInformationOfThisVector(const vector<int> i_vector)
{
    auto elementInformation
        = st_smallest_element_info
        {
            (unsigned short)i_vector[0],
            (unsigned short)0,
        };

    for (auto i = 0; i < i_vector.size(); i++)
    {
        if (i_vector[i] < elementInformation.element)
        {
            elementInformation.element
                = (unsigned short)i_vector[i];

            elementInformation.position
                = (unsigned short)i;
        }
    }

    return elementInformation;
}