#include "Cat.h"

#include <iostream>

Cat::Cat(std::string n) : Animal(n, "Cat", "meow") 
{}

void Cat::speak() const {
	std::cout << "My name is \n" << name << std::endl;
}
