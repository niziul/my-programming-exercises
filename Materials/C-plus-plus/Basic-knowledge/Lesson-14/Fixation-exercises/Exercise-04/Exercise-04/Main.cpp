/*
	[ description of the fourth fixation exercise ] :
		- A color can be represented by the combination of 4 intensity values for R (Red),
		G (Green), B (Blue) and A (Alpha). These values can be stored in a struct with 4 integers
		of 8 bits (0-255) or by a 32-bit integer value encoded with the 4 values. Build a union to
		store a color. Then build a function to read from the user a color in RGBA format and another
		to read a color in 32-bit integer format. Both functions must receive the address of a variable
		of type color and modify the variable received, without returning a value.

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			Enter a color in the respective format below
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- - ] ARGB

			Alpha: 255
			Red  : 38
			Green: 38
			Blue : 38

			- - ] INT32

			int32: 640034304

			-

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			- - ] ARGB  : (a)255 (r)38 (g)38 (b)38
			- - ] INT32 : 640034304
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::array;

union color
{
	struct
	{
		unsigned char a;
		unsigned char r;
		unsigned char g;
		unsigned char b;
	}argb;

	unsigned int32;
};

void read_argb(color*);
void read_int32(color*);
void show_color(color*, bool);

int main()
{
	auto foreground
		= color{};

	auto background
		= color{};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	cout << "Enter a color in the respective format below" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << endl;

	cout << "- - ] ARGB" << endl;

	cout << endl;

	read_argb(&foreground);

	cout << endl;

	cout << "- - ] INT32" << endl;

	cout << endl;
	
	read_int32(&background);

	cout << endl;

	cout << "-" << endl;
	
	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "- - ] ARGB  : ";
	show_color(&foreground, true);

	cout << endl;

	cout << "- - ] INT32 : ";
	show_color(&background, false);

	cout << endl;
	
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;
	
	system("pause");
}

void read_argb(color* color_ptr)
{
	auto t_color
		= array<int, 4>{};

	cout << "Alpha: ";
	cin >> t_color[0];
	cout << "Red  : ";
	cin >> t_color[1];
	cout << "Green: ";
	cin >> t_color[2];
	cout << "Blue : ";
	cin >> t_color[3];

	color_ptr->argb.a
		= (unsigned)t_color[0];

	color_ptr->argb.r
		= (unsigned)t_color[1];

	color_ptr->argb.g
		= (unsigned)t_color[2];

	color_ptr->argb.b
		= (unsigned)t_color[3];
}

void read_int32(color* color_ptr)
{
	cout << "int32: ";
	cin >> color_ptr->int32;
}

void show_color(color* color_ptr, bool type)
{
	if (type == true)
	{
		cout << "(a)" << (int)color_ptr->argb.a;
		cout << " ";
		cout << "(r)" << (int)color_ptr->argb.r;
		cout << " ";
		cout << "(g)" << (int)color_ptr->argb.g;
		cout << " ";
		cout << "(b)" << (int)color_ptr->argb.b;
	}
	else
	{
		cout << color_ptr->int32;
	}
}