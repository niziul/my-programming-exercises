#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void bye_function(int session_id);

int main()
{
	int session_id;

	cout << "[ Close session ]";
	
	cout << endl;
	cout << endl;
	
	cout << "- session id: ";
	cin >> session_id;

	cout << endl;
	cout << endl;

	bye_function(session_id);

	cout << endl;
	cout << endl;

	system("pause");
}

void bye_function(int session_id)
{
	cout << "[ Finishing session number: " << session_id << " ]" << endl;
}
