// Header File Pre Processor
#include "Game.h"
#include "Board.h"
#include "Player.h"

// C++ Standard Library Pre Processor
#include <sstream>

Game::Game() : currentPlayer(FIRST) {}

bool Game::isPlaying() const {
	return false;
}

void Game::play() {
	currentPlayer = FIRST;
	board->reset();

	while (isPlaying()) {
		system("cls");
		std::cout << board->getBoardPlaces();
		std::cout << "\n\n";
		std::cout << board->getCurrentBoard();
		std::cout << "\n\n";
		
		int move = players[currentPlayer]->getMove();
		while (!board->isValidMove(move)) {
			std::cout << "You cant move there, try again: ";
			move = players[currentPlayer]->getMove();
		}
		board->makeMove(players[currentPlayer]->getPiece(), move);
		nextPlayer();

		// show the finished game board
		system("cls");
		std::cout << board->getBoardPlaces();
		std::cout << "\n\n\n";
		std::cout << board->getCurrentBoard();
	}
}

bool Game::isTie() {
	// board full, no winner
	return false;
}

std::string getBoardPlaces() {
	std::stringstream ss;

	ss << "\n\t0 | 1 | 2";

	return;
}

bool Game::isWon() const {
	bool won = false;
	for (auto p : players) {
		won = won || board->isWinner < p->getPlace());
	}
	return won;
}

std::string Game::getInstructions() const
{
	std::stringstream ss;
	ss << "\tWelcome to TIC-TAC-TOE\n\n";
	ss << "Make your move by entering a number, 1 - 9. The number\n";
	ss << "corresponds with board position, as illustrated:\n\n";
	ss << board.getBoardPlaces();
	return std::string();
}

void Game::nextPlayer() {
	currentPlayer = (currentPlayer + 1) % NUM_PLAYERS
}

std::string Game::getAnnounceResult() const
{
	return std::string();
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


