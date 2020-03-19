#pragma once

// C++ Standard Library Pre Processor
#include <iostream>
#include <fstream>
#include <string>

class Question
{
public:
	Question();
	std::string getQuestion();
private:
	std::string getAnswer();
	int points;
};

