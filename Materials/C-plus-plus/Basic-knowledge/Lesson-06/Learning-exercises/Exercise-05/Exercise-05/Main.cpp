/*
	[ description of the fifth learning exercise ] :
		- Build an "isShort()" function to check if a number fits into 16 bits and
		  an "isInt()" function to check if a number fits into 32 bits. To achieve
		  this goal, the functions should always take the value in a larger number 
		  of bits and use the constants and use the constants defined in the header 
		  file "<climits>" to check whether check whether the numbers return a boolean 
		  value "true" or "false". Build a program to test the functions, as in the 
		  execution examples below.

		  Execution Example 1:
		  ] 
				Enter an integer value: 300

				300 fits in 16 bits!
				300 fits in 32 bits!
		  ]

		  Execution Example 2:
		  ]
				Enter an integer value: 70000

				70000 does not fit in 16 bits!
				70000 fits into 32 bits!
		  ]

		  Execution Example 2:
		  ]
				Enter an integer value: 5000000000

				5000000000 does not fit in 16 bits!
				5000000000 fits in 32 bits!
		  ]
	[ output ] :
		```
			---------- ------ -- -
			 Is_Short or Is_Int
			---------- ------ -- -

			- Execution Example 1:

			Enter an interger value
			: 300


			[ 300 fits in 16 bits! ]

			[ 300 fits in 32 bits! ]


			- Execution Example 2: 

			Enter an interger value
			: 70000


			[ 70000 does not fit in 16 bits! ]

			[ 70000 fits in 32 bits! ]


			- Execution Example 3:

			Enter an interger value
			: 5000000000


			[ 5000000000 does not fit in 16 bits! ]

			[ 5000000000 does not fit in 32 bits! ]
		```
*/

#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;

bool is_short(unsigned long long);
bool is_int(unsigned long long);

int main()
{
	unsigned long long interger_value;

	cout << "---------- ------ -- -" << endl;
	cout << " Is_Short or Is_Int " << endl;
	cout << "---------- ------ -- -" << endl;

	cout << endl;
	cout << endl;

	cout << "Enter an interger value" << endl;
	cout << ": ";
	cin >> interger_value;

	cout << endl;
	cout << endl;

	if ( is_short( interger_value ) )
	{
		cout << "[ " << interger_value << " fits in 16 bits! ]" << endl;
	}
	else
	{
		cout << "[ " << interger_value << " does not fit in 16 bits! ]" << endl;
	}

	cout << endl;

	if ( is_int( interger_value ) )
	{
		cout << "[ " << interger_value << " fits in 32 bits! ]" << endl;
	}
	else
	{
		cout << "[ " << interger_value << " does not fit in 32 bits! ]" << endl;
	}

	cout << endl;
	cout << endl;

	system("pause");
}

bool is_short(unsigned long long interger_value)
{
	return interger_value <= SHRT_MAX ? true : false;
}

bool is_int(unsigned long long interger_value)
{
	return interger_value <= INT_MAX ? true : false;
}