/*
    [ output ] :
        ```
        <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

        ] enter the car information below
        - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

        [ model             ] : Mustang GT
        [ year              ] : 2019
        [ normal price      ] : 300000

        -

        - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        car data
        - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

        [ model             ] :
                                ; 'Mustang GT';
        [ year              ] :
                                ; '2019';
        [ normal price      ] :
                                ; 'US$300000.00';
        [ promotional price ] :
                                ; 'US$273900.00';

        - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

        <@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
        ```
*/

#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

using std::ofstream;

using std::streamsize;
using std::numeric_limits;

struct st_car_data
{
    char model[50];
    char year[4];
    float normal_price;
    float promotional_price;
};

int main()
{
    auto car_data
        = st_car_data{};

    auto car_data_file
        = ofstream{};

    car_data_file
        .open("car_data.txt");

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

    cout << endl;

    cout << "] enter the car information below" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "[ model             ] : ";
    cin
        .getline(car_data.model, 50);

    cout << "[ year              ] : ";
    cin
        .getline(car_data.year, 5);
    
    cout << "\0";

    cout << "[ normal price      ] : ";
    cin >> car_data.normal_price;
    
    cout << endl;
    cout << "-" << endl;
    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "car data" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    car_data
        .promotional_price = 0.913f * car_data.normal_price;

    cout << endl;

    cout
        .setf(std::ios_base::fixed,
              std::ios_base::floatfield);
    cout
        .precision(2);

    cout << "[ model             ] : \n\t\t\t";
    cout << "; \'" << car_data.model << "\';" << endl;

    cout << "[ year              ] : \n\t\t\t";
    cout << "; \'" << car_data.year << "\';" << endl;

    cout << "[ normal price      ] : \n\t\t\t";
    cout << "; \'US$" << car_data.normal_price << "\';" << endl;

    cout << "[ promotional price ] : \n\t\t\t";
    cout << "; \'US$" << car_data.promotional_price << "\';" << endl;

    cout
        .setf(std::ios_base::fixed,
              std::ios_base::floatfield);
    cout
        .precision(2);

    car_data_file << "[ model             ] : \n\t\t\t\t";
    car_data_file << "; \'" << car_data.model << "\';" << endl;

    car_data_file << "[ year              ] : \n\t\t\t\t";
    car_data_file << "; \'" << car_data.year << "\';" << endl;

    car_data_file << "[ normal price      ] : \n\t\t\t\t";
    car_data_file << "; \'US$" << car_data.normal_price << "\';" << endl;

    car_data_file << "[ promotional price ] : \n\t\t\t\t";
    car_data_file << "; \'US$" << car_data.promotional_price << "\';" << endl;

    car_data_file
        .close();

    cout << endl;

    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    cout << endl;

    cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
    
    cin
        .ignore(numeric_limits<streamsize>::max(), '\n');
}