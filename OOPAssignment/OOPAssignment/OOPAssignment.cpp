#include <iostream>
#include "Dog.h"
using namespace std;
int main()
{
	//************  Object  ************

		Dog doge; // Instantiation Of Object
		doge.Breed = "Corgie"; //Giving Dog Properties
		doge.Color = "Golden Brown";
		doge.Height = 1.5;
		doge.Weight = 25; 


	//************  Function  ************

		doge.Pupper();
		cout << "Press enter to have your dog perform an action\n";
		cin.ignore();

		doge.Shake();
		cout << "Press enter to have your dog do something else.\n";
		cin.ignore();

		doge.Sit();
		cout << "Press enter to have your dog do something else.\n";
		cin.ignore();

		doge.LayDown();

}
