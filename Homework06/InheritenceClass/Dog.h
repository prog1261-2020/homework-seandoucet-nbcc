#pragma once

// Header File, Header Files
#include "Animal.h"

class Dog : public Animal
{

public:
	Dog(std::string name);
	int walk();
	void speak();

};

