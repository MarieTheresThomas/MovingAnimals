#include "Vector.h"
using namespace std; 
void VectorList::Add(map<Vector, int> vl, Vector v, int x)
{
	vl.insert(make_pair(v, x));
}

Vector VectorList::CalculateDirection(map <Vector, int> vl)
{
	Vector newVector;
	for (map<Vector, int>::iterator it = begin(); it = end(); it++)  //it is a pointer on map, iteraties through! 
	{
		newVector = newVector + it->first * it->second;		//add all vectors, multiplied by their weight, together
															//operator*  (vector * int) is overloaded to perform the scalar product
		return newVector.Normalize();
	}

}