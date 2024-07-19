/*
    [ description of the third learning exercise ] :
        - Reverse polish notation is a notation for mathematical
        expressions that is superior to traditional notation because
        it doesn't need brackets and isn't ambiguous. in reverse polish
        notation, the operands always come before the operator.

        ]
            traditional notation: 2 * 3 - 4 / 5

            parenthetical notation: ( 2 * 3 ) - ( 4 / 5 )

            reverse polish: 23*45/-
        ]

        considering that the operands are always single-digit
        numbers, build a program that receives an expression in
        reverse polish notation and calculates its result. use a
        stack to solve the problem.

        ]
            expression: 23+
            result: 5

            expression: 23+5-
            result: 0
            
            expression: 54*42-*
            result: 30
        ]

    [ output ] :
        ```v1
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] enter a math reverse polish expression below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : 23+

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] result
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - total: 5

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

        ```
        ```v2
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] enter a math reverse polish expression below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : 23+5-

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] result
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - total: 0

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
        ```v3
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] enter a math reverse polish expression below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            : 54*42-*

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] result
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - total: 40

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include "stack.h"

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

void sum_expression(char&, int&, int&, int*);

int main()
{
    auto complexity
        = int{};

    auto total
        = int{};

    auto stack_a
        = stack{};
    
    auto input
        = new char[32];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] enter a math reverse polish expression below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << ": ";
    cin >> input;

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] result" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    for (size_t i = strlen(input); i > 0; i--)
    {
        if (*(input + i - 1) != '+'
            &&
            *(input + i - 1) != '-'
            &&
            *(input + i - 1) != '*'
            &&
            *(input + i - 1) != '/')
        {
            continue;
        }
        
        complexity++;

        stack_a
            .add(*(input + i - 1));
    }

    for (size_t i = 0; !stack_a.empty();)
    {
        auto static operator_a
            = char{};

        stack_a.remover(operator_a);

        while (*(input + i++))
        {
            if (*(input + i) != '+'
                &&
                *(input + i) != '-'
                &&
                *(input + i) != '*'
                &&
                *(input + i) != '/')
            {
                continue;
            }

            switch (complexity)
            {
            case 1:
            {
                auto value_a
                    = *(input + i - 2) - '0';

                auto value_b
                    = *(input + i - 1) - '0';

                sum_expression(operator_a, value_a, value_b, &total);
            }
            break;
            case 2:
            {
                auto value_a
                    = int{};

                auto value_b
                    = int{};

                if (isdigit(*(input + i - 2)))
                {
                    value_a
                        = *(input + i - 2) - '0';

                }
                
                if (isdigit(*(input + i - 1)))
                {
                    value_b
                        = *(input + i - 1) - '0';
                }

                if (value_a != 0
                    &&
                    value_b != 0)
                {
                    sum_expression(operator_a, value_a, value_b, &total);
                }
                else
                {
                    sum_expression(operator_a, value_b, total, &total);
                }
            }
            break;
            case 3:
            {
                auto static result_a
                    = int{};

                auto static result_b
                    = int{};

                auto static value_a
                    = int{};

                auto static value_b
                    = int{};

                if (result_a == 0)
                {
                    value_a
                        = *(input + i - 2) - '0';

                    value_b
                        = *(input + i - 1) - '0';

                    sum_expression(operator_a, value_a, value_b, &result_a);

                    value_a
                        = 0;

                    value_b
                        = 0;

                    break;
                }

                if (result_b == 0)
                {
                    value_a
                        = *(input + i - 2) - '0';

                    value_b
                        = *(input + i - 1) - '0';

                    sum_expression(operator_a, value_a, value_b, &result_b);

                    value_a
                        = 0;

                    value_b
                        = 0;

                    break;
                }

                sum_expression(operator_a, result_a, result_b, &total);
            }
            break;
            default:
            break;
            }

            break;
        }
    }

    cout << "- total: " << total << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] input;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void sum_expression(char& operator_a, int& value_a, int& value_b, int* result_a)
{
    switch (operator_a)
    {
    case '+':
    {
        *result_a
            = value_a + value_b;
    }
    break;
    case '-':
    {
        *result_a
            = value_a - value_b;
    }
    break;
    case '*':
    {
        *result_a
            = value_a * value_b;
    }
    break;
    case '/':
    {
        *result_a
            = value_a / value_b;
    }
    break;
    }
}
