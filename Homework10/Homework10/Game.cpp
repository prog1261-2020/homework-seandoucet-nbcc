#include "Game.h"

Game::Game() : currentPlayer(FIRST) {}

bool Game::isPlaying() const {
	return false;
}

bool Game::isTie() {
	// board full, no winner
	return false;
}

std::string getBoardPlaces() {
	std::stringstream ss;

	ss << "\n\t0 | 1 | 2";

	return 
}

void Game::nextPlayer() {
	currentPlayer = (currentPlayer + 1) % NUM_PLAYERS
}

void Game::getAnnounceResult() {
	std::stringstream ss;

	ss << "The battle is finished,\n\n";
	if (isTie()) {
		ss << "Sadly, no player is victorious, both live to fight another day...\n";
	}
	else {
		ss << "";
	}
}

void Game::play() {
	currentPlayer = FIRST;
	board.reset();

	while (isPlaying()) {
		// say who current player is Player X go
		// players[currentPlayer]->makeMove
	}
}


