/*
    [ description of the fourth learning exercise ] :
        - Build a function that receives two vectors of intergers
        and creates a dynamic vector with the contents of the two
        vectors. the function should return the address of the resulting
        vector, which should be displayed on the screen by the main program.

        ]
            vector - a
            {
                1,
                4,
                5,
                7,
            };
            vector - b
            {
                3,
                2,
                8,
                9,
            };
            
            -

            dynamic vector
            {
                1,
                4,
                5,
                7,
                3,
                2,
                8,
                9,
            };
        ]

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            vector - a
            {
                1,
                4,
                5,
                7,
            }

            vector - b
            {
                3,
                2,
                8,
                9,
            }

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            dynamic vector
            {
                1,
                4,
                5,
                7,
                3,
                2,
                8,
            }

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
using std::initializer_list;

int* returnAnVectorWithTheValuesOfTheseTwoVectors(const initializer_list<int>, const initializer_list<int>);

int main()
{
    auto const vectorA
        =
        {
            1,
            4,
            5,
            7,
        };

    auto const vectorB
        =
        {
            3,
            2,
            8,
            9,
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "vector - a" << endl;

    cout << '{' << endl;

    for (const auto& element : vectorA)
    {
        cout << "\t" << element << "," << endl;
    }

    cout << '}' << endl;

    cout << endl;

    cout << "vector - b" << endl;

    cout << '{' << endl;

    for (const auto& element : vectorB)
    {
        cout << "\t" << element << "," << endl;
    }

    cout << '}' << endl;

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    auto dynamicVector
        = returnAnVectorWithTheValuesOfTheseTwoVectors(vectorA,
                                                       vectorB);

    auto size
        = *dynamicVector;

    cout << endl;

    cout << "dynamic vector" << endl;

    cout << '{' << endl;

    dynamicVector
        = dynamicVector - size;
    
    for (auto i = 0; i < size; i++)
    {
        cout << "\t" << *(dynamicVector + i) << "," << endl;
    }

    cout << '}' << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;
    
    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] dynamicVector;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

int* returnAnVectorWithTheValuesOfTheseTwoVectors(const initializer_list<int> vectorA, const initializer_list<int> vectorB)
{
    auto size
        = int{};

    for (const auto& element : vectorA)
    {
        size++;
    }

    for (const auto& element : vectorB)
    {
        size++;
    }

    if (size != 0)
    {
        auto dynamicVector
            = new int[size + 1];
        
        for (const auto& element : vectorA)
        {
            *(dynamicVector++)
                = element;
        }

        for (const auto& element : vectorB)
        {
            *(dynamicVector++)
                = element;
        }

        *(dynamicVector)
            = size;

        return dynamicVector;
    }
    else
    {
        return nullptr;
    }
}
