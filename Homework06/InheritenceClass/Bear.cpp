
// Program Header File
#include "Bear.h"

// C++ Standard Library Pre Processor
#include <iostream>

Bear::Bear() : Animal() {
	
}

void Bear::Speak() {
	std::cout << "Bear Speaking..." << std::endl;
}

void Bear::Move() {
	std::cout << "I am Moving..." << std::endl;
}
