
// Program Header File
#include "Cat.h"

#include <iostream>

Cat::Cat(std::string n) : Animal(n, "Cat", "meow") 
{}

void Cat::Speak() const {
	std::cout << "My name is \n" << name << std::endl;
}

void Cat::Move() {
	std::cout << "Cat is speaking..." << std::endl;
}
