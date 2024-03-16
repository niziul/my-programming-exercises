/*
    [ description of the first learning exercise ] :
        - Build a function that receives two pointers indicating
        a range of elements in a vector and an integer value and
        return how many times this value occurs within the range.
        to test the function, build a program that initializes a
        vector with elements { 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0 }
        and displays the number of zeros and ones in the vector.

        ]
            ] there are 5 zeros and 6 ones in the range indicated.
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            [ elements within the vector:
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            {
                    0,
                    1,
                    0,
                    1,
                    0,
                    1,
                    1,
                    1,
                    0,
                    1,
                    0,
            }

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] there are '5' zeros and '6' ones in the range indicated.

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

uint16_t returnTheNumberOfTimesThisValueAppearsInThisVector(int*, int*, uint16_t);

int main()
{
    auto vector
        =
        {
            0,
            1,
            0,
            1,
            0,
            1,
            1,
            1,
            0,
            1,
            0,
        };

    auto amountOfOnes
        = uint16_t{};

    auto amountOfZeros
        = uint16_t{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "[ elements within the vector: " << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    cout << "{" << endl;

    for (auto& element : vector)
    {
        cout << "\t" << element << "," << endl;
    }

    cout << "}" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    amountOfOnes
        = returnTheNumberOfTimesThisValueAppearsInThisVector((int*)vector
                                                                    .begin(),
                                                             (int*)vector
                                                                    .end(),
                                                              1);

    amountOfZeros
        = returnTheNumberOfTimesThisValueAppearsInThisVector((int*)vector
                                                                    .begin(),
                                                             (int*)vector
                                                                    .end(),
                                                              0);

    cout << "] there are \'" << amountOfZeros << "\' zeros and \'" << amountOfOnes << "\' ones in the range indicated." << endl;
    
    cout << endl;
    
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

uint16_t returnTheNumberOfTimesThisValueAppearsInThisVector(int* begin, int* end, uint16_t value)
{
    auto temp
        = uint16_t{};

    do
    {
        temp
            += (*(begin++) == value) ? 1 : 0;

    } while (begin != end);

    return temp;
}
