/*
	[ description of the third fixation exercise ]:
		- Create a program that reads the name and price of various computer
		products. At the end of each entry, the program should ask if the user
		wants to continue. At the end of the program, display:

		]
			a: the total amount spent;
			b: how many products cost more than US$1000;
			c: what is the name of the most expensive product;
		]

	[ output ]:
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Computer Store
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] product: mouse
			] price  : 120

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			Would you like to continue? [ y/n ]: y


			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] product: notebook
			] price  : 3500

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			Would you like to continue? [ y/n ]: y


			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] product: monitor
			] price  : 1400

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			Would you like to continue? [ y/n ]: n


			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			-

			- -] total spent: 'US$5020';
			- -] '2' products cost more than US$1000;
			- -] 'notebook' is the most expensive product;

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

using std::vector;

using std::streamsize;
using std::numeric_limits;

struct st_product
{
	char name[40];
	double price;
};

int main()
{
	auto products
		= vector<st_product>();

	auto amount_spent
		= new double{};

	auto amount_of_expensive_products
		= new int{};

	auto index_of_the_most_expensive_product
		= new int{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Computer Store" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	auto is_to_continue
		= 'y';

	do
	{
		cout << endl;

		auto current_product
			= st_product{};

		cout << "] product: ";
		cin >> current_product.name;

		cout << "] price  : ";
		cin >> current_product.price;

		products
			.push_back(current_product);

		if (current_product.price > 1000)
		{
			(*amount_of_expensive_products)++;
		}

		auto amount_of_products
			= products.size();

		if ((int)amount_of_products > 1)
		{
			auto product
				= products.at(amount_of_products - 2);

			if (current_product.price > product.price)
			{
				*index_of_the_most_expensive_product
					= (int)amount_of_products - 1;
			}
		}
		else
		{
			*index_of_the_most_expensive_product
				= (int)amount_of_products;
		}

		*amount_spent
			+= current_product.price;

		cout << endl;
		
		cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

		cout << "Would you like to continue? [ y/n ]: ";
		cin >> is_to_continue;

		cout << endl;
		cout << endl;
		
		cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	} while (tolower(is_to_continue) == 'y');

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	cout << "- -] total spent: \'US$" << *amount_spent << "\';" << endl;
	cout << "- -] \'" << *amount_of_expensive_products << "\' products cost more than US$1000;" << endl;
	cout << "- -] \'" << products.at(*index_of_the_most_expensive_product).name << "\' is the most expensive product;" << endl;
	
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete amount_spent;
	delete amount_of_expensive_products;
	delete index_of_the_most_expensive_product;
	
	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}