#include "HumanPlayer.h"

// C++ Standard Library Pre Processor
#include <iostream>

void HumanPlayer::makeMove() {}

int getValidInput() {
	int m;
	std::cin >> m;
	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(1024, '\n');
		std::cout << "\n enter a number please:";
		std::cin >> m;
	}
}


int HumanPlayer::getMove() {
	std::cout << "Player " << getPiece() << "\'s move";
	int m = getValidInput();
}

char HumanPlayer::getPiece() {
	return 0;
}
