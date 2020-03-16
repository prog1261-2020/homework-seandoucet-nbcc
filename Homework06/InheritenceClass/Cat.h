#pragma once

// Header File, Header Files
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat(std::string name);
	void Speak() const;
	void Move();
	int Pet();
};

