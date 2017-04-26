
#include "Vector.h"
#include <map>

class VectorList
{
	std::map <Vector, int> _VectorList;
public:
	void Add(Vector v, int x);
	Vector CalculateDirection(std::map <Vector, int> vl);
};