// C++ Standard Library Pre Processor
#include <algorithm>
#include <sstream>

// Header File Pre Processor
#include "Board.h"


const int Board::WINNING_COMBOS[NUM_WINNING_COMBOS][NUM_IN_COMBO] {
	{0, 3, 6},
	{3, 4, 5},
	{6, 7, 8},
	{0, 3, 6}
};

void Board::reset()
{
	
}

bool Board::isFull()
{
	return std::none_of(board.begin(), board.end(), [](char e) { return e == ' '; });
}

bool Board::isValidMove(int move)
{
	if (move >= 0 && move < NUM_SQUARES) {
		return board[move] == ' ';
	}
	else {
		return false;
	}
}

bool Board::checkCombo(int combo, char piece) const
{
	int piecesInCombo = 0;
	for (int i = 0; i < NUM_IN_COMBO; ++i) {
		if (board[WINNING_COMBOS[combo][i]] == piece) {

		}
	}
}

char Board::isWinner(char playerPiece)
{
	bool winner = false;
	int combo = 0;
	while (!winner && combo < NUM_WINNING_COMBOS) {
		winner = checkCombo(combo, piece);
		++combo;
	}
	return A;
}

std::string Board::getBoardPlaces()
{
	std::stringstream ss;
	ss << "\n\t6 | 7 | 8";
	return std::string();
}

std::string Board::getCurrentBoard()
{
	std::stringstream ss;
	return std::string();
}

void Board::makeMove(char piece, int move)
{
	board[move] = playerPiece;
}
