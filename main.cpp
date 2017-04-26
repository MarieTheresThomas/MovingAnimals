// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#ifndef ANIMAL_H
#define ANIMAL_H

#ifndef VECTOR_H
#define VECTOR_H


#ifndef VECTORLIST_H
#define VECTORLIST_H




#include "Animal.h"
#include "Vector.h"
#include "Vectorlist.h"
#include <iostream>
#include <list>
#include <array>
#include <ctime>


using namespace std; 

int SIZE = 40; //size of matrix
int StartAnimalAmount;
Animal activeAnimals [StartAnimalAmount];
float SPEED; //movement speed of animals 
float renderImgAfterTime;

//should variables better be dclared outside or inside the main function?
int main()
{
	clock_t timeCap; 
	float oldTime;
	int newImgAvailable = 0;
	float animX;
	float animY;
	/*cout<< "Type in Size of Matrix"<<endl;  //cout -> in << direction! 
	cin >> Size; */

	InitializeMatrix(); 
	//code 
	srand(time(NULL))
	for (int i = 0; i < StartAnimalAmount; i+3)
	{
		activeAnimals[i] = new A(rand() % SIZE, rand() % SIZE);
		activeAnimals[i+1] = new B(rand() % SIZE, rand() % SIZE);
		activeAnimals[i+2] = new C(rand() % SIZE, rand() % SIZE);
	}
	while (true)
	{
		Vector newDirection;
		
		for (int i = 0; i < StartAnimalAmount; i++)
		{
			newDirection = activeAnimals[i].AnimMove(activeAnimals);  //returns new movement direction   //insert function into animals class which moves an animal towards a vector over time //maybe move by a smll percentage of thhat vectoers x and y ccordinalte 
			activeAnimal[i].position = newDirection * SPEED;
			animX = activeAnimal[i].position.getX();
			animY = activeAnimal[i].position.getY();
			newImgAvailable++;
		}
		timeCap = clock();
		if ((timeCap - oldTime) < renderImgAfterTime; )
		{
			oldTime = timeCap;
			InitializeMatrix();
			renderCurrentMatrix(); 
			newImgAvailable = 0;
		}
		cin.get();
	}
}

void renderCurrentMatrix()
{
	for (int i = 0; i < StartAnimalAmount; i++)
	{
		animX = activeAnimal[i].position.getX();
		animY = activeAnimal[i].position.getY();
		matrix[animX][animY] = activeAnimal[i].name;  //matrix[x][y] = char
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << string(matrix[i]) << endl;
	}
}
void InitializeMatrix()
{
	char **matrix = new *char[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		matrix*[i] = new char[SIZE];
		for (int j = 0; j < SIZE; j++)
		{
			matrix[i][j] = ' '; 
		}
	}
}

#endif // !ANIMAL_H
#endif // !VECTOR_H
#endif // !VECTORLIST_H