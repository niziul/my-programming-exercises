#include <iostream>

void pushup(int);

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	int amount_of_repetitions;

	cout << "how many push-ups do you want to do?" << endl;
	cout << ": ";
	cin >> amount_of_repetitions;

	cout << endl;
	cout << endl;

	pushup(amount_of_repetitions);

	cout << endl;
	cout << endl;

	system("pause");
}

void pushup(int amount_of_repetitions)
{
	std::cout << "[ Do " << amount_of_repetitions << " pushups ]" << std::endl;
}
