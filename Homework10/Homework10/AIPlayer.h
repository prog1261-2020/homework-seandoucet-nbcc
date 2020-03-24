#pragma once

// C++ Standard Library Pre Processor
#include <iostream>

// Header File Pre Processor
#include "Player.h"
#include "Board.h"

class AIPlayer : 
{
	AIPlayer(char p, Board* b);

	int getMove() override;

private:
	Board* board;
};

