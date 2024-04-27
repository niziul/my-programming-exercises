/*
    [ description of the third fixation exercise ] :
        - In the previous program, use a vector of pointers
        to sum() style functions and use a loop to successively
        apply calculate() to a series of functions.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter two values below ('x' to exit)
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            {
            ; perform an addition;
            ; perform an subtraction;
            ; perform an multiplication;
            ; perform an division;
            }

            valueA   : 5
            valueB   : 5

            - addition result       : '10'
            - subtraction result    : '0'
            - multiplication result : '25'
            - division result       : '1'

            continue: y

            valueA   : 10
            valueB   : 2

            - addition result       : '12'
            - subtraction result    : '8'
            - multiplication result : '20'
            - division result       : '5'

            continue: x

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

double sum(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);

double calculate(double, double, double(*pt_function)(double, double));
double* calculate(double, double, double(*pt_function[4])(double, double));

int main()
{
    auto inputA
        = double{};

    auto inputB
        = double{};

    auto inputC
        = char{};

    auto ptFunctions
        = 
        {
            sum,
            sub,
            mul,
            div,
        };

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter two values below ('x' to exit)" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << '{' << endl;

    cout << "; perform an addition;" << endl;
    cout << "; perform an subtraction;" << endl;
    cout << "; perform an multiplication;" << endl;
    cout << "; perform an division;" << endl;

    cout << '}' << endl;

    cout << endl;

    do
    {
        cout << "valueA   : ";
        cin >> inputA;
        cout << "valueB   : ";
        cin >> inputB;

        cout << endl;

        auto results
            = calculate(inputA,
                        inputB,
                        (double (**)(double, double))ptFunctions.begin());

        cout << "- addition result       : \'" << *(results++) << "\'" << endl;
        cout << "- subtraction result    : \'" << *(results++) << "\'" << endl;
        cout << "- multiplication result : \'" << *(results++) << "\'" << endl;
        cout << "- division result       : \'" << *(results++) << "\'" << endl;

        delete[] (results -= 4);
        
        cout << endl;

        cout << "continue: ";
        cin >> inputC;

        if (inputC == 'x')
        {
            break;
        }

        cout << endl;

    } while (true);

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

double sum(double valueX, double valueY)
{
    return valueX + valueY;
}

double sub(double valueX, double valueY)
{
    return valueX - valueY;
}

double mul(double valueX, double valueY)
{
    return valueX * valueY;
}

double div(double valueX, double valueY)
{
    return valueX / valueY;
}

double calculate(double valueX, double valueY, double(*pt_function)(double, double))
{
    return (*pt_function)(valueX, valueY);
}

double* calculate(double valueX, double valueY, double(*pt_function[4])(double, double))
{
    auto result
        = new double[4]
        {
            (*pt_function++)(valueX, valueY),
            (*pt_function++)(valueX, valueY),
            (*pt_function++)(valueX, valueY),
            (*pt_function++)(valueX, valueY)
        };

    return result;
}
