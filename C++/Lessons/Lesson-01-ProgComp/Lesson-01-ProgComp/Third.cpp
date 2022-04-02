#include <iostream>
using namespace std;

int main()
{
	int dias;      // declares an integer variable
    cout << "Numbers of days: ";
    cin >> dias;   // reads a value to the variable
	
	float horas = dias * 23.56F;
    cout << dias << " days has " << horas << " hours." << endl;
    
    return 0;
}
