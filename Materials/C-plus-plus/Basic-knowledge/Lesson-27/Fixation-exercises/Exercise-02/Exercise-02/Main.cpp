/*
    [ description of the second fixation exercise ] :
        - Design a 'calculate()' function that receives two
        double values and the address of a function and returns
        the result of applying that function to the values receives.
        the function passed as an argument to 'calculate()' must receive
        two arguments of type double and return a double value. for example,
        suppose the definition:

        ]
            double sum(double x, double y)
            {
                return x * y;
            }
        ]

        so the function call below should make calculate() pass
        the values '2.5' and '19.3' to the sum(), function and return
        the sum result, which '12.8' in this example:

        ]
            double q = calculate(2.5, 10.3, sum);
        ]

        use these functions and at least one more function similar
        to 'sum()' in the program. the program should use a loop that
        allows the user to enter pairs of values. for each pair, use 'calculate()'
        to call 'sum()' an another function.

    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter two values below ('x' to exit)
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            {
            'a)' to perform an addition;
            'b)' to perform an subtraction;
            }

            operation: a

            valueA   : 20
            valueB   : 3
            - '23'

            operation: b

            valueA   : 20
            valueB   : 3
            - '17'

            operation: x

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

double add(double, double);
double sub(double, double);

double calculate(double, double, double(*pt_function)(double, double));

int main()
{
    auto inputA
        = double{};

    auto inputB
        = double{};

    auto inputC
        = char{};

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter two values below ('x' to exit)" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << '{' << endl;

    cout << "'a)' to perform an addition;" << endl;
    cout << "'b)' to perform an subtraction;" << endl;

    cout << '}' << endl;

    cout << endl;
    Lesson - 27 - Inline Functions and Function Pointers

        - First Fixation Exercise
    do
    {
        cout << "operation: ";
        cin >> inputC;

        if (inputC == 'x')
        {
            break;
        }

        cout << endl;

        cout << "valueA   : ";
        cin >> inputA;
        cout << "valueB   : ";
        cin >> inputB;

        switch (inputC)
        {
        case 'a':
        case 'A':
        {
            cout << "- \'" << calculate(inputA, inputB, add) << "\'" << endl;
        }
        break;
        case 'b':
        case 'B':
        {
            cout << "- \'" << calculate(inputA, inputB, sub) << "\'" << endl;
        }
        break;
        default:
        {
            cout << "- \'" << calculate(inputA, inputB, add) << "\'" << endl;
            cout << "- \'" << calculate(inputA, inputB, sub) << "\'" << endl;
        }
        break;
        };

        cout << endl;

    } while (true);

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

double add(double valueX, double valueY)
{
    return valueX + valueY;
}

double sub(double valueX, double valueY)
{
    return valueX - valueY;
}

double calculate(double valueX, double valueY, double(*pt_function)(double, double))
{
    return (*pt_function)(valueX, valueY);
}
