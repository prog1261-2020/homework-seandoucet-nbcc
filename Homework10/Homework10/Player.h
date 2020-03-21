#pragma once
class Player
{
public:
	Player();
	virtual ~Player();

	virtual void makeMove() = 0;
	char getPiece();

private:
	char piece;
};

