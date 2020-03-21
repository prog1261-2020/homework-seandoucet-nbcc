#pragma once

// Header File Pre Processor
#include "Player.h"

class HumanPlayer : public Player
{
	HumanPlayer();

	void makeMove() override;
	char getPiece();
};

