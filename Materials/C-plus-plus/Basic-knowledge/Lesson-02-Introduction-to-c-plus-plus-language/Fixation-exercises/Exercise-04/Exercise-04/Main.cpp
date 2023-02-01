#include <iostream>

using std::cout;
using std::endl;
using std::left;
using std::right;

int main()
{
	cout << left; cout.width(10); cout << "Product";
	cout << right; cout.width(6); cout << "Amount";
	cout.width(8); cout << "Price" << endl;

	cout << left; cout.width(10); cout << "-------";
	cout << right; cout.width(6); cout << "------";
	cout.width(8);	cout << "-----" << endl;

	cout << left; cout.width(10); cout << "Pineapple";
	cout << right; cout.width(6); cout << "2.5";
	cout.width(8); cout << "1.99" << endl;

	cout << left; cout.width(10); cout << "Carrot";
	cout << right; cout.width(6); cout << "4.6";
	cout.width(8); cout << "5.90" << endl;

	cout << left; cout.width(10); cout << "Lemon";
	cout << right; cout.width(6); cout << "20.5";
	cout.width(8); cout << "10.40" << endl;

	cout << left; cout.width(10); cout << "Apple";
	cout << right; cout.width(6); cout << "345.0";
	cout.width(8); cout << "120.30" << endl;

	cout << left; cout.width(10); cout << "Guava";
	cout << right; cout.width(6); cout << "20.5";
	cout.width(8); cout << "56.00" << endl;

	return 0;
}