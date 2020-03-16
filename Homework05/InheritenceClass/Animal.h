#pragma once

#include <string>

class Animal
{
public:
	Animal();
	Animal(const std::string&name, const std::string& type, const std::string& sound);

	const std::string& getName() const;
	const std::string& getType() const;
	const std::string& getSound() const;
	void speak() const;

private:
	std::string type;
	std::string sound;

protected:
	std::string name;

};

