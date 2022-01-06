#include "Dog.h"
#include <iostream>
using namespace std; 

void Dog::Pupper() {
	cout << "Breed: " << Dog::Breed << "\n";
	cout << "Color: " << Dog::Color << "\n";
	cout << "Height: " << Dog::Height << "Foot \n";
	cout << "Weight: " << Dog::Weight << "Lbs \n";

}

void Dog::Shake() {
	cout << "Your dog lifted up his/her paw to shake your hand!\n\n";
}

void Dog::Sit() {
	cout << "Your dog sat down.\n\n";
}

void Dog::LayDown() {
	cout << "Your dog is tired and lays down to rest.\n\n";
}