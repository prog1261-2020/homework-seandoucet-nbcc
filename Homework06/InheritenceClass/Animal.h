#pragma once

#include <string>

class Animal
{
public:
	Animal();
	Animal(const std::string&name, const std::string& type, const std::string& sound);

	virtual void Speak() const;
	virtual void Move() = 0;

	const std::string& getName() const;
	const std::string& getType() const;
	const std::string& getSound() const;

protected:
	std::string type;
	std::string sound;
	std::string name;

};

