/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] sum of powers of two: '255';

            ] the first three add up: '7';
            ] the last four add up: '240';

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

int sumVector(const int*, const int*);

int main()
{
    auto total
        = int{};
    
    auto const size
        = 8;

    auto const powers
        =
        {
            1,
            2,
            4,
            8,
            16,
            32,
            64,
            128,
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    total
        = sumVector(powers.begin(), powers.end());

    cout << "] sum of powers of two: \'" << total << "\';" << endl;

    cout << endl;

    total
        = sumVector(powers.begin(), powers.begin() + 3);

    cout << "] the first three add up: \'" << total << "\';" << endl;

    total
        = sumVector(powers.begin() + 4, powers.begin() + 8);

    cout << "] the last four add up: \'" << total << "\';" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

int sumVector(const int* vectorBegin, const int* vectorLast)
{
    auto sum
        = int{};

    for (auto current = vectorBegin; current != vectorLast; ++current)
    {
        sum
            += *current;
    }
    
    return sum;
}
