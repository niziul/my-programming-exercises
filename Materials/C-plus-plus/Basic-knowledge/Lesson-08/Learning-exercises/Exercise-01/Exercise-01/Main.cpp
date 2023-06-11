/*
	[ description of the first learning exercise ] :
		- Write a function that calculates the roots of the quadratic equation 'ax² + bx + c'.
		  Take as arguments to the function the terms 'a', 'b', and 'c' of the quadratic equation 
          and show the result inside the function itself.

	[ output ] :
		```
            I--------------------------------------------------------------I

            Enter coefficients a, b and c

            a: 2

            b: -3

            c: 1

            I--------------------------------------------------------------I
            I--------------------------------------------------------------I
            -] The roots are real and different.
            -] Root 1 = 1
            -] Root 2 = 0
            I--------------------------------------------------------------I
		```
*/

#define nextline '\n'

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

void calculateRoots(double, double, double);

int main()
{
    auto a = 0;
    auto b = 0;
    auto c = 0;

    cout << "I--------------------------------------------------------------I" << nextline;
    
    cout << nextline;

    cout << "Enter coefficients a, b and c" << nextline;
    
    cout << nextline;

    cout << "a: ";
    cin >> a;
    
    cout << nextline;

    cout << "b: ";
    cin >> b;

    cout << nextline;

    cout << "c: ";
    cin >> c;

    cout << nextline;

    cout << "I--------------------------------------------------------------I" << nextline;

    cout
        .setf(std::ios_base::fixed);

    calculateRoots(a, b, c);

    cout
        .unsetf(std::ios_base::fixed);

    return 0;
}

void calculateRoots(double a, double b, double c)
{
    cout
        .precision(3);

    auto discriminant = b * b - 4 * a * c;
    auto root1 = 0;
    auto root2 = 0;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "I--------------------------------------------------------------I" << nextline;
        cout << "-] The roots are real and different." << nextline;
        cout << "-] Root 1 = " << root1 << nextline;
        cout << "-] Root 2 = " << root2 << nextline;
        cout << "I--------------------------------------------------------------I" << nextline;
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);

        cout << "I--------------------------------------------------------------I" << nextline;
        cout << "-] The roots are real and same." << nextline;
        cout << "-] Root 1 = Root 2 = " << root1 << nextline;
        cout << "I--------------------------------------------------------------I" << nextline;
    }
    else
    {
        auto realPart = -b / (2 * a);
        auto imaginaryPart = sqrt(-discriminant) / (2 * a);

        cout << "I--------------------------------------------------------------I" << nextline;
        cout << "-] The roots are complex and different." << nextline;
        cout << "-] Root 1 = " << realPart << " + " << imaginaryPart << "i" << nextline;
        cout << "-] Root 2 = " << realPart << " - " << imaginaryPart << "i" << nextline;
        cout << "I--------------------------------------------------------------I" << nextline;
    }
}