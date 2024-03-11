/*
    [ description of the third fixation exercise ] :
        - Redo the previous question by modifying the functions
        to use two pointer parameters that indicate a range of values
        within the vector. the fill function should return a pointer to
        the position following the last filled position, instead of returning
        the number of values stored. the other function can use this pointer as
        a second argument to identify the end of the data.

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

double* fillThisVector(double*, double*);
void showThisVector(const double*, const double*);
void invertThisVector(double*, double*);

int main()
{
    auto size
        = 10;

    auto vectorEnd
        = new double;

    auto vectorBegin
        = new double[size]{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    vectorEnd
        = fillThisVector(vectorBegin, vectorBegin + size);

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    showThisVector(vectorBegin, vectorEnd);

    cout << endl;

    invertThisVector(vectorBegin, vectorEnd);

    cout << endl;

    showThisVector(vectorBegin, vectorEnd);

    cout << endl;

    invertThisVector(vectorBegin + 1, vectorEnd - 1);

    cout << endl;

    showThisVector(vectorBegin, vectorEnd);

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] vectorBegin;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

double* fillThisVector(double* begin, double* end)
{
    cout << "] enter up to 10 values below" << endl;

    cout << endl;

    auto value
        = double{};

    cout << ": ";

    while (begin != end
           &&
           cin >> value)
    {
        *begin
            = value;

        ++begin;
        
        cout << ": ";
    }
    
    return begin;
}

void showThisVector(const double* begin, const double* end)
{
    cout << "[ ";
    
    for (; begin != end; ++begin)
    {
        cout << *begin << " ";
    }

    cout << endl;
}

void invertThisVector(double* begin, double* end)
{
    while (begin < end)
    {
        auto temp
            = *begin;

        *(begin++)
            = *(--end);

        *end
            = temp;
    }
}