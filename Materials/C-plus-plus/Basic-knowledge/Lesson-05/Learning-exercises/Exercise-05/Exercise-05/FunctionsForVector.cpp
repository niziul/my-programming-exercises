#include <cmath>
#include "FunctionsForVector.h"

float return_the_length_of_a_vector(float x, float y)
{
	return sqrtf( powf( x , 2.0 ) + powf( y , 2.0 ) );
}

float return_the_angle_of_a_vector(float x, float y)
{
	return ( atan2f( y , x ) * 180.0F ) / 3.14159265359F;
}
