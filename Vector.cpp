#include "Vector.h"
#include <math.h>
#include <map>

using namespace std;
void Vector::setX(float _x)
{
	x = _x;
}
void Vector::setY(float _y)
{
	y = _y; 
}
void Vector::setXY(float _x, float_y)
{
	x = _x;
	y = _y;
}
Vector Vector::operator+ (Vector const& a)
{
	Vector v;  //private values of class Vector are accessible because publi functions of same class have access to its provate properties ! 
	v.x = this->x + a.x;
	v.y = this->y + a.y;
	return v;
}
Vector Vector::operator- (Vector const& b)
{
	vector v;
	v.x = this->x - b.x;
	v.y = this->y - b.y;
	return v;
}
Vector Vector::operator* (float a)
{
	this->x *= a;
	this->y *= a;
	return (*this); //return DEREFERENCED pointer! 
}
	
static float Vector::distance(Vector a, Vector b) //stati so that it does not need to be called by a vector 
{
	float xDelta = b.x - a.x;
	float yDelta = b.y - a.y;
	return sqrt((xDelta * xDelta) + (yDelta * yDelta)); 
}
float Vector::distanceTo(Vector b); //alternative Function
{
	float xDelta = b.x - this->x;
	float yDelta = b.y - this->y;
	return sqrt((xDelta * xDelta) + (yDelta * yDelta));
}
Vector Vector::middleBetween(Vector a, Vector b)
{
	Vector v; 
	v.x = (a.x + b.x) / 2;
	v.y = (a.y + b.y) / 2;
	return v; 
}
float Vector::Length()  //can be called like VectorA.Length()  -> returns a float
{
	/*xVal = this->x;
	yVal = this->y;
	return sqrt(xVal * xVal + yVal * yVal); */
	return sqrt(x * x + y * y); 
	
}
Vector Vector::Normalize()
{
	Vector v;
	v.x = x / this->Length();
	v.y ) y / this->Length(); 
	return v; 
}



