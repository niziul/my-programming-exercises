/*
	[ description of the first fixation exercise ] :
		- Write a program that keeps track of donations made to a charity.
		It should ask the user for the number of contributors and then request
		the name and amount donated by each person. This information should be stored
		in a dynamic vector of struts. After reading all values, the program should display
		the name and amount donated bu all the contributors who donated US$10000 or more. This
		list should be titled "Great Patrons". Next, the program should list the remining donors,
		calling them "Patrons" only.

		]
			Enter the number of contributors: 4

			#1
			Name: José Silva
			Amount: 22000
			#2
			Name: Carlos Bezerra
			Amount: 200
			#3
			Name: Antônio Souza
			Amount: 10000
			#4
			Name: Pedro Neto
			Amount: 3000

			Great Patrons
			José Silva 22000
			Antônio Souza 10000

			Patrons
			Carlos Bezerra 200
			Pedro Neto 3000
		]

		If there are no donors in one of the categories, the program should display the word "none".
		You don't need to sort the donations, just display them in two categories.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the number of contributors below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 4

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] - - '1';

					 [ name    ]: José
					 [ donated ]: 22000


			] - - '2';

					 [ name    ]: Carlos
					 [ donated ]: 200


			] - - '3';

					 [ name    ]: Antônio
					 [ donated ]: 10000


			] - - '4';

					 [ name    ]: Pedro
					 [ donated ]: 3000


			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			] Great Patrons

			-[ 'José' - US$22000;
			-[ 'Antônio' - US$10000;

			] Patrons

			-[ 'Carlos' - US$200;
			-[ 'Pedro' - US$3000;

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::streamsize;
using std::numeric_limits;

struct st_donor
{
	char name[20];
	int amount;
};

int main()
{
	auto number_of_contributors
		= 0;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the number of contributors below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> number_of_contributors;

	cout << endl;
	cout << "-" << endl;
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	auto contributors
		= new st_donor[number_of_contributors];

	for (auto i = 0; i < number_of_contributors; i++)
	{
		auto donor
			= st_donor{};

		cout << "] - - \'" << i + 1 << "\';" << endl;

		cout << endl;

		cout << "\t [ name    ]: ";
		cin >> donor.name;

		cout << "\t [ donated ]: ";
		cin >> donor.amount;

		cout << endl;
		cout << endl;

		*(contributors + i)
			= donor;
	}

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "] Great Patrons" << endl;

	cout << endl;

	auto temp
		= 0;

	for (auto i = 0; i < number_of_contributors; i++)
	{
		if ((contributors + i)->amount >= 10000)
		{
			cout << "-[ \'" << (contributors + i)->name << "\' - US$" << (contributors + i)->amount << ";" << endl;
			temp++;
		}
	}

	if (temp == 0)
	{
		cout << "-[ none;" << endl;

		temp = 0;
	}

	cout << endl;

	cout << "] Patrons" << endl;

	cout << endl;

	for (auto i = 0; i < number_of_contributors; i++)
	{
		if ((contributors + i)->amount < 10000)
		{
			cout << "-[ \'" << (contributors + i)->name << "\' - US$" << (contributors + i)->amount << ";" << endl;
		}
	}

	if (temp == 0)
	{
		cout << "-[ none;" << endl;

		temp = 0;
	}

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete[] contributors;

	cin
		.ignore(numeric_limits<streamsize>::max(), '\n');

	cin
		.get();
}