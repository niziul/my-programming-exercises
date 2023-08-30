/*
	[ description of the sixth learning exercise ] :
		- Create a struct called 'person' that stores a person's name, age
		and gender. Write a program that reads an indeterminate number of people,
		stopping reading only when the word 'end' is type for the name. Show the average
		age of the group.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter the details of the people in the group below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - - - - ] person - '1':
			[ name   ]: thiago
			[ gender ]: male
			[ age    ]: 32

			- - - - - ] person - '2':
			[ name   ]: niziul
			[ gender ]: male
			[ age    ]: 90

			- - - - - ] person - '3':
			[ name   ]: sarah
			[ gender ]: female
			[ age    ]: 20

			- - - - - ] person - '4':
			[ name   ]: exit
			[ gender ]: 0
			[ age    ]: 0



			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			- - - ] average age of the group: '47';
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

struct people
{
	char name[20];
	char gender[20];
	int age;
};

istream& operator>>(istream&, people&);
ostream& operator<<(ostream&, people&);

int main()
{
	auto average_age
		= new int{};

	auto number_of_people
		= new int{};

	auto all_the_people
		= new people[1]{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter the details of the people in the group below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	auto t_people
		= people{};

	do
	{
		if (*number_of_people > 0)
		{
			auto i_people
				= new people[*number_of_people + 1]{};

			for (auto i = 0; i < *number_of_people; i++)
			{
				*(i_people + i)
					= *(all_the_people + i);
			}

			delete[] all_the_people;

			all_the_people
				= new people[*number_of_people + 1]{};

			for (auto i = 0; i < *number_of_people; i++)
			{
				*(all_the_people + i)
					= *(i_people + i);
			}

			delete[] i_people;
		}

		cout << "- - - - - ] person - \'" << (*number_of_people + 1)<< "\':" << endl;
		
		cin >> t_people;

		if (strcmp(t_people.name, "exit") != 0)
		{
			*(all_the_people + (*number_of_people)++) = t_people;
		}

	} while (strcmp(t_people.name, "exit"));

	cout << endl;
	cout << endl;
	cout << endl;

	auto age_sum
		= 0;

	for (auto i = 0; i < *number_of_people; i++)
	{
		age_sum
			+= (all_the_people + i)->age;
	}

	*average_age
		= age_sum / *number_of_people;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;

	cout << "- - - ] average age of the group: \'" << *average_age << "\';" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete average_age;
	delete number_of_people;
	delete[] all_the_people;

	system("pause");
}

istream& operator>>(istream& t_istream, people& t_person)
{
	cout << "[ name   ]: ";
	t_istream >> t_person.name;
	cout << "[ gender ]: ";
	t_istream >> t_person.gender;
	cout << "[ age    ]: ";
	t_istream >> t_person.age;

	cout << endl;

	return t_istream;
}

ostream& operator<<(ostream& t_ostream, people& t_person)
{
	t_ostream << "[ name   ] - \'" << t_person.name << "\'" << endl;
	t_ostream << "[ gender ] - \'" << t_person.gender << "\'" << endl;
	t_ostream << "[ age    ] - \'" << t_person.age << "\'" << endl;

	return t_ostream;
}