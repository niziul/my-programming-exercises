/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter the value of the property #1: 945300.4
            ] enter the value of the property #2: 582030.4
            ] enter the value of the property #3: 285934.9
            ] enter the value of the property #4: 10404000.5
            ] enter the value of the property #5: 22400000.9
            ] enter the value of the property #6: -1

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            [ property #1: US$945300;
            [ property #2: US$582030;
            [ property #3: US$285935;
            [ property #4: US$1.0404e+07;
            [ property #5: US$2.24e+07;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] adjusting property values
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] enter the adjusting value: 1.5

            -

            [ property #1: US$1.41795e+06;
            [ property #2: US$873046;
            [ property #3: US$428902;
            [ property #4: US$1.5606e+07;
            [ property #5: US$3.36e+07;

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include "property.h"

int main()
{
    auto size
        = int{};

    auto adjustingValue
        = double{};

    auto const max
        = 5;

    auto const properties
        = new double[5];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    size
        = fillVector(properties, max);

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    showVector(properties, size);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "] adjusting property values" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "] enter the adjusting value: ";
    cin >> adjustingValue;

    modifyVector(adjustingValue, properties, size);

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    showVector(properties, size);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}
