#pragma once
//insekten fliegen herum, insekten legen eier 
#include <map>


class Vector
{
	float x;
	float y;
public:
	Vector operator+ (Vector const& a);
	Vector operator- (Vector const& b);
	Vector operator* (float a);

	static float distance(Vector a, Vector b); //stati so that it does not need to be called by a vector 
	float distanceTo(Vector a); //alternative Function
	Vector middleBetween(Vector a, Vector b);

	float Length();
	Vector Normalize(Vector v); 
};

class VectorList
{
	map <Vector, int> _VectorList;
public:
	void Add(Vector v, int x);
	Vector CalculateDirection(map <Vector, int> vl);
};

