/*
    [ description of the first fixation exercise ] :
        - Aks the user to enter pairs of numbers until one of the
        pair values is zero (or up to a maximum of 10 pairs). the program
        should store the pairs in a vector. write a function that receives
        the vector of pairs and displays the pairs, always putting the smallest
        number as the first element of the pair.

        ]
            enter pairs of values (0 to end):

            9 3
            2 8
            7 5
            0

            organized pairs:

            (3,9)
            (2,8)
            (5,7)

        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter pairs of value (0 to end)

            : 9 3
            : 2 8
            : 7 5
            : 0 0

            -

            [ organized pairs:

            ( 3, 9 )
            ( 2, 8 )
            ( 5, 7 )

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

void displayThisVectorInOrder(int*, int);

int main()
{
    auto firstValue
        = int{};

    auto secondValue
        = int{};

    auto allPairs
        = new int[20];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter pairs of value (0 to end)" << endl;

    cout << endl;
    
    auto index
        = int{};

    do
    {
        cout << ": ";
        cin >> firstValue;
        cin >> secondValue;

        *(allPairs + (index++))
            = firstValue;

        *(allPairs + (index++))
            = secondValue;

    } while ((firstValue != 0
             ||
             secondValue != 0)
             &&
             index < 20);

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "[ organized pairs:" << endl;

    cout << endl;

    displayThisVectorInOrder(allPairs, 20);

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] allPairs;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void displayThisVectorInOrder(int* vector, int size)
{
    for (auto i = 0; i < size; i+=2)
    {
        if (*(vector + i) == 0
            ||
            *(vector + (i + 1)) == 0)
        {
            break;
        }

        if (*(vector + (i))
            <
            *(vector + (i + 1)))
        {
            cout << "( " << *(vector + i) << ", " << *(vector + (i + 1)) << " )" << endl;
        }
        else
        {
            cout << "( " << *(vector + (i + 1)) << ", " << *(vector + i) << " )" << endl;
        }
    }
}
