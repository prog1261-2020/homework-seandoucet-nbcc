
// C++ Standard Library Pre Processor
#include <iostream>
#include <string>
#include <vector>
#include <memory>

// Program Header File
#include "Animal.h"
#include "Bear.h"
#include "Cat.h"
#include "Dog.h"
#include "Duck.h"
#include "Koala.h"

int main() {
	Cat cat("Sabrina");
	Animal dog("Fido", "dog", "Gav");
	Animal duck("Donald", "duck", "Quck");
	std::vector< std::unique_ptr<Animal> > zoo;

	zoo.push_back(Bear());
	zoo.push_back(Cat());
	zoo.push_back(Dog());
	zoo.push_back(Duck());
	zoo.push_back(Koala());

	for (auto& a : zoo) {
		a->Speak();
	}

	std::cout << "\n\n";

	std::cout << "I am a " << cat.getType() << " and I say " << cat.getSound() << std::endl;
	std::cout << "I am a " << dog.getType() << " and I say " << dog.getSound() << std::endl;
	std::cout << "I am a " << duck.getType() << " and I say " << duck.getSound() << std::endl;
}