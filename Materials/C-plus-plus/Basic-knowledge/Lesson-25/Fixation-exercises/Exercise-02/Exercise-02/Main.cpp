/*
    [ description of the second fixation exercise ] :
        - Write a program that uses the following functions:
        
        fill: receives as an argument a vector of doubles and
        size of the vector. the function asks the user to enter
        values to fill the vector. it stops entering values when
        the vector fills up or when the user enters a non-numeric
        value, and returns the number of values stored.

        show: receives a vector of double's and their size and
        displays the contents of the vector.

        invert: takes as an argument a vector of doubles and
        their size and inverts the order of the stored values.

        the program should use these functions to fill the vector,
        show the vector, invert the vector, show the vector again,
        invert all except the first and las elements, and then show
        the vector once more. use const whenever appropriate.

        ]
            enter up to 10 values:

            21 32 85 43 17 80 end

            21 32 85 43 17 80
            80 17 43 85 32 21
            80 32 85 43 17 21
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter up to 10 values below

            : 21
            : 32
            : 85
            : 43
            : 17
            : 80
            : end

            -

            [ 21 32 85 43 17 80


            [ 80 17 43 85 32 21


            [ 80 32 85 43 17 21

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

void fillThisVector(double*, int*);
void showThisVector(const double*, const int);
void invertThisVector(double*, const int);

int main()
{
    auto size
        = 10;

    auto vector
        = new double[size]{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    fillThisVector(vector, &size);
    
    cout << endl;
    cout << "-" << endl;
    cout << endl;

    showThisVector(vector, size);

    cout << endl;

    invertThisVector(vector, size);

    cout << endl;

    showThisVector(vector, size);

    cout << endl;

    invertThisVector(vector + 1, size - 2);

    cout << endl;

    showThisVector(vector, size);

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] vector;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void fillThisVector(double* vector, int* size)
{
    cout << "] enter up to 10 values below" << endl;

    cout << endl;

    auto value
        = double{};

    for (auto i = 0; i < *size; i++)
    {
        cout << ": ";
        cin >> value;

        if (cin.fail())
        {
            cin.clear();

            *size
                = i;

            break;
        }

        *(vector + i)
            = value;
    }
}

void showThisVector(const double* vector, const int size)
{
    cout << "[ ";

    for (auto i = 0; i < size; i++)
    {
        if (*(vector + i) == 0)
        {
            break;
        }

        cout << *(vector + i) << " ";
    }

    cout << endl;
}

void invertThisVector(double* vector, const int size)
{
    auto tempVector
        = new double[size];

    for (auto i = 0; i < size; i++)
    {
        *(tempVector + i)
            = *(vector + i);
    }

    for (auto i = 0, j = size - 1; i < size; i++, j--)
    {
        *(vector + i)
            = *(tempVector + j);
    }

    delete[] tempVector;
}
