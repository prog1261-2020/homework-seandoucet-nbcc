// C++ Standard Library Pre Processor
#include <iostream>
#include <map>
#include <string>
#include <fstream>

// Function Section of Program
std::ifstream& fileOpen() {
	std::ifstream data;
	data.open("fox.txt");

	if (!data) {
		std::cout << "File has failed to open" << std::endl;
		exit(1);
	}
	return data;
}

int main() {
	std::map<std::string, int> words;

	fileOpen();

	std::cout << "Program EXECUTED..." << std::endl;

	for (int loop = 0; loop <= 15; ++loop) {

	}

}