#pragma once

#include <ostream>

using std::ostream;

class lazy_vector2
{
public:
	enum eCoordinates
	{
		rectangular,
		polar
	};

	lazy_vector2();
	lazy_vector2(double value_a,
				 double value_b,
				 eCoordinates coordinate_type = rectangular);

	double get_angle()
	const
	{
		return this->angle;
	}
	double get_magnitude()
	const
	{
		return this->magnitude;
	}
	void set_coordinate_type(const eCoordinates& coordinate_type)
	{
		this->type = coordinate_type;
	}

	lazy_vector2 operator+(const lazy_vector2& lazy_vector2_a)
	const;
	lazy_vector2 operator-(const lazy_vector2& lazy_vector2_a)
	const;

	lazy_vector2 operator-()
	const;
	lazy_vector2 operator*(double value_a)
	const;

	friend lazy_vector2 operator*(const double& value_a, const lazy_vector2& lazy_vector2_a);
	friend ostream& operator<<(ostream& ostream_a, const lazy_vector2& lazy_vector2_a);

private:
	double x;
	double y;
	double angle;
	double magnitude;

	eCoordinates type;

	void set_x();
	void set_y();
	void set_angle();
	void set_magnitude();

};

