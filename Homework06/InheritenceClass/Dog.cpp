
// Program Header File
#include "Dog.h"

// C++ Standard Library Pre Processor
#include <iostream>

Dog::Dog : Animal(std::string) {

}

void Dog::Speak() const{
	std::cout << "I am a dog..." << std::endl;
}

void Dog::Move() {
	std::cout << "Cat is moving..." << std::endl;
}


