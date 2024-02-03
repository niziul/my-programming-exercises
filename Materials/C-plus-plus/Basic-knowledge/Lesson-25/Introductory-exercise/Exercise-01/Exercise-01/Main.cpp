/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            [ total sales: '10';

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

short sumVector(const initializer_list<short>*);

int main()
{
    auto const sales
        =
        {
            (short)1,
            (short)1,
            (short)0,
            (short)4,
            (short)1,
            (short)3,
            (short)0,
        };

    auto const total = sumVector(&sales);

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "[ total sales: \'" << total << "\';" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

short sumVector(const initializer_list<short>* vector)
{
    auto sum
        = short{};

    for (auto& number : *vector)
    {
        sum
            += number;
    }

    return sum;
}
