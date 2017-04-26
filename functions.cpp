//general functions
#include "functions.h"
template <typename T>
static void Delete(T t) //ultimate delete function // has no scope? 
{
	delete(t);
}

void DeleteThis()
{
	delete(*this); //this = pointer on obj. of scope (calling object) 
}