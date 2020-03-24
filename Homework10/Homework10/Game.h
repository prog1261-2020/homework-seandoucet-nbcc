#pragma once

// C++ Standard Library Pre Processor
#include <iostream>
#include <string>

// Header File Pre Processor
#include "Board.h"
#include "Player.h"

class Game
{
	Player* player[2];
	bool isPlaying();
	bool isTie() const;
	bool isWon() const;
	std::string getInstructions() const;
	void nextPlayer();
	std::string getAnnounceResult() const;
	void play();

private:
	static const int NUM_PLAYERS = 2;
	static const int FIRST = 0;
	static const int SECOND = 1;

	Board board;
	Player* players[NUM_PLAYERS];
	int currentPlayer;

};

