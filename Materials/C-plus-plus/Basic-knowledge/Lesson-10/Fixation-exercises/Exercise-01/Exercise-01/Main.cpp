/*
	[ description of the first fixation exercise ] :
		- Write a program that creates two vectors of three elements each.
		  The first vector should store the prices of the products: Lettuce US$1.50/Kg,
		  Beet US$2.00/kg, Carrot US$1.00/kg. The second vector should store the desired quantity of each
		  product. This quantity will be entered by the user. Calculate the total payable per product and the final
		  total of the purchase.

	[ output ] :
		```
			< -| - - - - - - - - - - - - - - - - - - - - |- >

			Enter the amount of 'lettuce' you wish to buy
			- - - - - - - - - - - - - - - - - - - - - - - - -
			: 2

			Enter the amount of 'beet' you wish to buy
			- - - - - - - - - - - - - - - - - - - - - - - - -
			: 3

			Enter the amount of 'carrot' you wish to buy
			- - - - - - - - - - - - - - - - - - - - - - - - -
			: 1.5

			- - - - - - - - - - - - - - - - - - - - - - - - -
			Purchase Summary
			- - - - - - - - - - - - - - - - - - - - - - - - -

			Lettuce = US$3.00
			Beet    = US$6.00
			Carrot  = US$1.50

			- - - - - - - - - - - - - - - - - - - - - - - - -

			Total   = US$10.50

			- - - - - - - - - - - - - - - - - - - - - - - - -

			< -| - - - - - - - - - - - - - - - - - - - - |- >
		```
*/

#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::array;

int main()
{
	auto nextline
		= '\n';

	auto price_of_each_product
		= array<float, 3>
		{
			1.50, // price of lettuce
			2.00, // price of beet
			1.00  // price of carrot
		};

	auto amount_of_each_product
		= array<float, 3>
		{
			0.0,  // amount of lettuce
			0.0,  // amount of beet
			0.0   // amount of carrot
		};

	cout << "< -| - - - - - - - - - - - - - - - - - - - - |- >" << nextline;

	cout << nextline;

	cout << "Enter the amount of \'lettuce\' you wish to buy" << nextline;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	
	cout << ": ";
	
	cin >> amount_of_each_product[0];

	cout << nextline;

	cout << "Enter the amount of \'beet\' you wish to buy" << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << ": ";

	cin >> amount_of_each_product[1];

	cout << nextline;

	cout << "Enter the amount of \'carrot\' you wish to buy" << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << ": ";

	cin >> amount_of_each_product[2];

	cout << nextline;

	cout << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	cout << "Purchase Summary" << nextline;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;

	auto total_beet_lettuce
		= price_of_each_product[0] * amount_of_each_product[0];

	auto total_beet_price
		= price_of_each_product[1] * amount_of_each_product[1];

	auto total_beet_carrot
		= price_of_each_product[2] * amount_of_each_product[2];

	cout
		.setf(std::iostream::fixed);

	cout
		.precision(2);

	cout << "Lettuce = US$" << total_beet_lettuce << nextline;
	cout << "Beet    = US$" << total_beet_price << nextline;
	cout << "Carrot  = US$" << total_beet_carrot << nextline;

	cout << nextline;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;
	
	cout << nextline;

	auto total_purchase_price
		= total_beet_lettuce + total_beet_price + total_beet_carrot;

	cout << "Total   = US$" << total_purchase_price << nextline;
	
	cout
		.unsetf(std::iostream::fixed);
	
	cout << nextline;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - -" << nextline;

	cout << nextline;

	cout << "< -| - - - - - - - - - - - - - - - - - - - - |- >" << nextline;

	cout << nextline;
	
	system("pause");
}