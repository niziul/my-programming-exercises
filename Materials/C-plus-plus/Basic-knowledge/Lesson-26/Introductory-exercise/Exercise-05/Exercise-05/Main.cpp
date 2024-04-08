/*
    [ output ] :
        ```
            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

            ] enter your 5 favorite planets below
            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            ] planet - 1: earth
            ] planet - 2: mars
            ] planet - 3: uranus
            ] planet - 4: jupiter
            ] planet - 5: venus

            -

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            ] list of all your favorite planets

            - 1: 'earth';
            - 2: 'mars';
            - 3: 'uranus';
            - 4: 'jupiter';
            - 5: 'venus';

            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::string;
using std::getline;

using std::streamsize;
using std::numeric_limits;

void displayAllSavedPlanets(const string*, int);

int main()
{
    auto planets
        = new string[5];

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter your 5 favorite planets below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    for (auto i = 0; i < 5; i++)
    {
        cout << "] planet - " << i + 1 << ": ";
        
        getline(cin,
                *(planets + i));
    }

    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    displayAllSavedPlanets(planets, 5);

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    delete[] planets;

    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}

void displayAllSavedPlanets(const string* allPlanets, int amount)
{
    cout << "] list of all your favorite planets" << endl;

    cout << endl;

    do
    {

        cout << "- " << 5 - ((--amount) - 1) << ": \'" << *allPlanets++ << "\';" << endl;

    } while (amount > 0);
}
