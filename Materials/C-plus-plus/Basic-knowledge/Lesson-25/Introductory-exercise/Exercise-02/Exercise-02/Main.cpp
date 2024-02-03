/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] vector addr: '0000005C7ECFF8E8'; vector sizeof: '14';

            -

            ] vector addr: '0000005C7ECFF8E8'; vector sizeof: '8';
            ] total sales: '11';
            ] vector addr: '0000005C7ECFF8E8'; vector sizeof: '8';
            ] first three: '2';
            ] vector addr: '0000005C7ECFF8EE'; vector sizeof: '8';
            ] last four: '9';

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

short sumVector(short*,
                short);

int main()
{
    short sales[7]
        =
        {
            1,   
            1,   
            0,   
            4,   
            1,   
            4,   
            0,   
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] vector addr: \'" << sales << "\'; vector sizeof: \'" << sizeof sales << "\';" << endl;

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "] total sales: \'" << sumVector(sales, 7) << "\';" << endl;;
    cout << "] first three: \'" << sumVector(sales, 3) << "\';" << endl;;
    cout << "] last four: \'" << sumVector(sales + 3, 4) << "\';" << endl;;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

short sumVector(short* vector,
                short size)
{
    cout << "] vector addr: \'" << vector << "\'; vector sizeof: \'" << sizeof vector << "\';" << endl;
    
    auto sum
        = short{};

    for (auto i = (short)0; i < size; ++i)
    {
        sum
            += *(vector + i);
    }

    return sum;
}