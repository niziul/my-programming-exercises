#include <iostream>

using std::cout;
using std::endl;
using std::left;
using std::right;

int main()
{
	cout << left;   cout.width(16); cout << "Product";
	cout << right;  cout.width(10); cout << "Price/Kg";
	cout << right;  cout.width(18); cout << "Order (Kg)";
	cout.width(14); cout << "Total" << endl;

	cout << left;   cout.width(16); cout << "---------";
	cout << right;  cout.width(10); cout << "----------";
	cout << right;  cout.width(18); cout << "-----------";
	cout.width(14);	cout << "---------" << endl;

	cout << left;   cout.width(16); cout << "Lettuce";
	cout << right;  cout.width(10); cout << "R$ 1,25/Kg";
	cout << right;  cout.width(18); cout << "3,2/Kg";
	cout.width(14); cout << "R$ 4,00" << endl;

	cout << left;   cout.width(16); cout << "Beet";
	cout << right;  cout.width(10); cout << "R$ 0,65/Kg";
	cout << right;  cout.width(18); cout << "6,0/Kg";
	cout.width(14); cout << "R$ 3,90" << endl;

	cout << left;	cout.width(16); cout << "Carrot";
	cout << right;	cout.width(10); cout << "R$ 0,90/Kg";
	cout << right;	cout.width(18); cout << "10/Kg";
	cout.width(14); cout << "R$ 9,00" << endl;

	return 0;
}