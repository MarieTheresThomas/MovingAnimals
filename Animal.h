
int movePriority;
class Animal
{
	Vector position;
	VectorList animalVectorList;

public:
	Animal enemies;
	Animal prey;
	Animal(Animal _enemies, Animal _prey);
	Vector AnimMove(activeAnimals[StartAnimalAmount]);
};

//inherit from animal, child constructor build only of position of random values 
class A : Animal
{
public:
	A(float _x, float _y) : Animal(B, C);   //hav to write values of baseclass constructor directly into baseclasss construtor call!
};

class B : Animal
{
public:
	B(float _x, float _y) : Animal(C, A);  //hav to write values of baseclass constructor directly into baseclasss construtor call!
};

class C : Animal
{
public:
	C(float _x, float _y) : Animal(A, B);  //hav to write values of baseclass constructor directly into baseclasss construtor call!
};
#pragma once
