/*
	[ description of the second learning exercise ] :
		- Use the "#define" directive to create symbolic constants for the price of a loaf of bread
		  ( US$0.30 ) and for the price of a pastry ( US$0.25 ). In the main function, ask the how many
		  loaves of bread and how many cakes he wants. Use the symbolic constants constants that represent
		  the prices of the products to calculate how much the user will pay, and show the result on the screen.

	[ output ] :
		```
			------------ ------ --- -
			Bread & Cia
			------------ ------ --- -


			How many loaves of bread do you want? ( ex: 5 )
			: 5


			How many pastries do you want?        ( ex: 4 )
			: 4


			[ The total purchases : US$2.5 ]
		```
*/

#include <iostream>

#define price_of_bread 0.30F;
#define price_of_pastry 0.25F;

using std::cin;
using std::cout;
using std::endl;

int main()
{
	float amount_of_bread;
	float amount_of_pastry;

	float total_order_value;
	float total_value_of_bread_ordered;
	float total_value_of_pastry_ordered;

	cout << "------------ ------ --- -" << endl;
	cout << "Bread & Cia" << endl;
	cout << "------------ ------ --- -" << endl;

	cout << endl;
	cout << endl;

	cout << "How many loaves of bread do you want? ( ex: 5 )" << endl;
	cout << ": ";
	cin >> amount_of_bread;

	cout << endl;
	cout << endl;

	cout << "How many pastries do you want?        ( ex: 4 )" << endl;
	cout << ": ";
	cin >> amount_of_pastry;

	cout << endl;
	cout << endl;

	total_value_of_bread_ordered = amount_of_bread * price_of_bread;
	
	total_value_of_pastry_ordered = amount_of_pastry * price_of_pastry;

	total_order_value = total_value_of_bread_ordered + total_value_of_pastry_ordered;

	cout << "[ The total purchases : US$" << total_order_value << " ]" << endl;

	cout << endl;
	cout << endl;

	system("pause");
}