/*
    [ description of the third learning exercise ] :
        - Write a program that reads 10 values from the user and
        inserts them into a vector so that the elements are sorted.
        to do this, before each insertion, use a 'locate' function to
        locate and return the correct position of the element within the
        vector. then use another function, 'openSpace', which receives a
        position and opens space in the vector at that position, pushing
        the other elements to the next position. if the open space operation
        is not possible because the vector is full, the function should return
        false. use these functions in the main program to insert the elements and
        then display the sorted elements.

        ]
            enter 10 values:
            3 12 6 7 4 8 2 9 14 1

            the ordered values:
            1 2 3 4 6 7 8 9 12 14
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter 10 values below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            : 3
            : 12
            : 6
            : 7
            : 4
            : 8
            : 2
            : 9
            : 14
            : 1

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] 1 2 3 4 6 7 8 9 12 14 ;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int locateTheCorrectPositionOfTheElementWithinTheVector(int*, const int);
bool openSpaceAtTheCorrectPositionForTheElementWithinTheVector(int*, const int);

int main()
{
    auto vector
        = new int[10]{};
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter 10 values below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    auto value
        = int{};

    for (auto i = 0; i < 10; i++)
    {
        cout << ": ";
        cin
            >> value;

        auto elementPosition
            = locateTheCorrectPositionOfTheElementWithinTheVector(vector,
                                                                  value);

        auto hasSpaceInTheVectorForTheElement
            = openSpaceAtTheCorrectPositionForTheElementWithinTheVector(vector,
                                                                        elementPosition);

        if (hasSpaceInTheVectorForTheElement)
        {
            *(vector + elementPosition)
                = value;
        }
    }
    
    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    cout << "] ";

    for (auto i = 0; i < 10; i++)
    {
        cout << *(vector + i) << " ";
    }

    cout << ";" << endl;
    
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    delete[] vector;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

int locateTheCorrectPositionOfTheElementWithinTheVector(int* vector, const int element)
{
    auto position
        = int{};

    for (auto i = 0; i < 10; i++)
    {
        if (*(vector + i) == 0)
        {
            break;
        }

        if (*(vector + i) < element)
        {
            position++;
        }
    }

    return position;
}

bool openSpaceAtTheCorrectPositionForTheElementWithinTheVector(int* vector, const int elementPosition)
{
    for (auto i = 9; i > elementPosition; i--)
    {
        *(vector + i)
            = *(vector + (i - 1));
    }

    return true;
}
