#pragma once
#include <string>
using namespace std;

//***********  Header File to declare class Dog  ***********

class Dog
{
	public:
		string Breed;
		string Color;
		int Height;
		int Weight;

		void Shake();
		void Sit();
		void LayDown();
		void Pupper();
};

