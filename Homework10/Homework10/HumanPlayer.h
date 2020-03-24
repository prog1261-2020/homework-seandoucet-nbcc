#pragma once

// Header File Pre Processor
#include "Player.h"

class HumanPlayer : public Player
{
	HumanPlayer();

	int getMove() override;
	char getPiece();
};

