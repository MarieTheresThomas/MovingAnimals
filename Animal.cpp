#include "Animal.h"
#include "Vector.h"
#include <list>
#include <map>
	Animal::Animal(Animal _enemies, Animal _prey)
	{
		animalVectorList = new VectorList;
		enemies = _enemies;
		prey = _prey;
	}
	Vector Animal::AnimMove(activeAnimals[StartAnimalAmount]) {
		for (int i = 0; i < StartAnimalAmount; i++)
		{
			float distance;
			if (activeAnimals[i] == this->enemies)  //check out all enemiies in the list of active animals 
			{ distance = position.distanceTo(activeAnimals[i]);  //store distance from correntaAnimal to Enemy
				if (enemydistance < 20 && enemydistance >= 10)
				{
					movePriority = 5;
				}
				else if (enemydistance < 10 && enemydistance >= 5)
				{
					movePriority = 20;
				}
				else if (enemydistance < 5)
				{
					movePriority = 40;
				}
				else
				{
					movePriority = 2;
				}

				animalVectorList.Add((position - activeAnimals[i]).Normalize(), movePriority );  //add a movement vectr to moveList of current animal, pointing in the opposite direction of the enemy, weight is determined by dstance t enemy 
			}

			if (activeAnimals[i] == this->prey)  //check out all enemiies in the list of active animals 
			{
				float preydistance = position.distanceTo(activeAnimals[i]);  //store distance from correntaAnimal to Enemy
				if (enemydistance < 20 && enemydistance >= 10)
				{
					movePriority = 5;
				}
				else if (enemydistance < 10 && enemydistance >= 5)
				{
					movePriority = 20;
				}
				else if (enemydistance < 5)
				{
					movePriority = 40;
				}
				else
				{
					movePriority = 2;
				}

				animalVectorList.Add((activeAnimals[i] - position).Normalize(), movePriority);  //add a movement vectr to moveList of current animal, pointing in the opposite direction of the enemy, weight is determined by dstance t enemy 
			}
			return animalVectorList.CalculateDirection(); 

		}
	}


};

//inherit from animal, child constructor build only of position of random values 
	A::A(float _x, float _y) : Animal(B,C)  //hav to write values of baseclass constructor directly into baseclasss construtor call!
	{
		name = 'A';
		position.setX(_x);
		position.setY(_y);
		enemies = B;
		prey = C;
	}

	B::B(float _x, float _y) : Animal(C, A)  //hav to write values of baseclass constructor directly into baseclasss construtor call!
	{
		name = 'B'; 
		position.setX(_x);
		position.setY(_y);
		enemies = C;
		prey = A;
	}

	C::C(float _x, float _y) : Animal(A, B)  //hav to write values of baseclass constructor directly into baseclasss construtor call!
	{
		name = 'C';
		position.setX(_x);
		position.setY(_y);
		enemies = A;
		prey = B;
	}
