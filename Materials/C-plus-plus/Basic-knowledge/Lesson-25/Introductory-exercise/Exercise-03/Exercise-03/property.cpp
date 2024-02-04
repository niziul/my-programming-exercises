#include "property.h"

int fillVector(double* vector, int size)
{
    auto temp
        = double{};

    auto index
        = int{};

    cout << "] enter the value of the property #" << index + 1 << ": ";

    while (cin >> temp
           &&
           index < size
           &&
           temp >= 0)
    {
        *(vector + (index++))
            = temp;

        cout << "] enter the value of the property #" << index + 1 << ": ";
    }

    cout << endl;

    if (cin.fail())
    {
        cin
            .clear();

        while (cin.get() != '\n')
        {
            continue;
        }

        cout << "- invalid entry. reading terminated." << endl;
    }

    return index;
}

void showVector(const double* vector, int size)
{
    for (auto i = 0; i < size; ++i)
    {
        cout << "[ property #" << i + 1 << ": US$" << *(vector + i) << ";" << endl;
    }
}

void modifyVector(double adjustingFactor, double* vector, int size)
{
    for (auto i = 0; i < size; ++i)
    {
        *(vector + i)
            *= adjustingFactor;
    }
}