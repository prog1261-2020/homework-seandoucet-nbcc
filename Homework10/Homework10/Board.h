#pragma once

// C++ Standard Library Pre Processor
#include <iostream>
#include <vector>

class Board
{
	std::vector<char> board = {};
	Board();
	void reset();
	bool isFull();
	bool isValidMove(int move);
	char isWinner(char playerPiece);
	std::string getBoardPlaces();
	std::string getCurrentBoard();
	void makeMove(char piece, int move);

private:
	bool checkCombo(int combo, char piece) const;

	static const NUM_SQUARES = 9;
	static const char EMPTY = '';
	static const int NUM_WINNING_COMBOS = 8;
	static const int NUM_IN_COMBO = 3;
	static const int WINNING_COMBOS[NUM_WINNING_COMBOS][NUM_IN_COMBO];

	std::vector<char> board;


};

