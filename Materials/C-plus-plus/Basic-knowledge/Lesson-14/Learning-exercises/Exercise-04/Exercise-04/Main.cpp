/*
	[ description of the fourth learning exercise ] :
		- Create a struct called 'image' that contains fields for the 'name', 'height', 'width'
		and 'type' being one of the following values: 'jpg', 'png' or 'bmp'. Use an enumeration to
		store the type of the image. In the main program initialize a variable of type 'image' and pass
		its address to a function called 'details'. The function should receive the address of an 'image'
		and display its data in the format of the exempla below:

		]
			The image "background" with size '1920x1080' has the format 'png'.
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			- - ] The image 'background' with size '1920x1080' has the format 'png'.

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cout;
using std::endl;

enum class type
{
	JPG,
	PNG,
	BMP
};

struct st_image
{
	char name[80];
	int width;
	int height;
	type type;
};

void details(st_image*);

int main()
{
	auto image
		= st_image
		{
			"background",
			1920,
			1080,
			type::PNG
		};

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;

	details(&image);

	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	system("pause");
}

void details(st_image* image_ptr)
{
	cout << "- - ] The image ";
	cout << "\'";
	cout << image_ptr->name;
	cout << "\'";

	cout << " ";

	cout << "with size ";
	cout << "\'";
	cout << image_ptr->width;
	cout << "x";
	cout << image_ptr->height;
	cout << "\'";

	cout << " ";

	cout << "has the format ";
	cout << "\'";
	switch (image_ptr->type)
	{
		case type::JPG:
		{
			cout << "jpg";
		}
		break;
		case type::PNG:
		{
			cout << "png";
		}
		break;
		case type::BMP:
		{
			cout << "bmp";
		}
		break;
	}
	cout << "\'." << endl;
}