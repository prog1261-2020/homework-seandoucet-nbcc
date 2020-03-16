#include "Animal.h"
#include "Cat.h"
#include <iostream>
#include <string>

int main() {
	Cat cat("Sabrina");
	Animal dog("Fido", "dog", "Gav");
	Animal duck("Donald", "duck", "Quck");

	std::cout << "\n\n";

	std::cout << "I am a " << cat.getType() << " and I say " << cat.getSound() << std::endl;
	std::cout << "I am a " << dog.getType() << " and I say " << dog.getSound() << std::endl;
	std::cout << "I am a " << duck.getType() << " and I say " << duck.getSound() << std::endl;
}