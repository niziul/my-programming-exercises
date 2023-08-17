/*
	[ description of the fourth learning exercise ] :
		- Declare a 'login' struct with the 'name' and 'password' fields.
		Create a variable of this type and store the login of the system administrator.
		Ask the user to enter their name and password and check that the values entered match
		those of the administrator. If they are correct, display the message: "login and password
		correct". The check should be done using a for loop, which should compare each of the vectors,
		character by character.

	[ output ] :
		```v1
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Login
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			[ name     ] : frog
			[ password ] : iceicedice9

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] The 'login' and 'password' are correct!

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```

		```v2
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Login
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			[ name     ] : snake
			[ password ] : iceicedice10

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] The 'login' or 'password' is incorrect!

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct s_login
{
	char name[20];
	char password[20];
};

int main()
{
	auto adm_login
		= new s_login
		{
			"frog\x00",
			"iceicedice9\x00"
		};

	auto user_login
		= new s_login;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Login" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "[ name     ] : ";
	cin.getline(user_login->name, 20);

	cout << "[ password ] : ";
	cin.getline(user_login->password, 20);

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	auto is_name_correct
		= new bool
		{
			true
		};

	auto is_password_correct
		= new bool
		{
			true
		};

	for (auto i = 0; i <= 20; i++)
	{
		if (*(adm_login->name + i) == '\x00'
			&&
			*(user_login->name + i) == '\x00')
		{
			break;
		}

		if (*(adm_login->name + i)
			!=
			*(user_login->name + i))
		{
			*is_name_correct
				= false;

			break;
		}
	}

	for (auto i = 0; i <= 20; i++)
	{
		if (*(adm_login->password + i) == '\x00'
			&&
			*(user_login->password + i) == '\x00')
		{
			break;
		}

		if (*(adm_login->password + i)
			!=
			*(user_login->password + i))
		{
			*is_password_correct
				= false;

			break;
		}
	}

	if (*is_name_correct
		&&
		*is_password_correct)
	{
		cout << "- - ] The \'login\' and \'password\' are correct!" << endl;
	}
	else
	{
		cout << "- - ] The \'login\' or \'password\' is incorrect!" << endl;
	}

	delete is_name_correct;
	delete is_password_correct;

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	cout << endl;
	
	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete adm_login;
	delete user_login;

	system("pause");
}