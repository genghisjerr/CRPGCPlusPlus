#pragma once
#include "Location.h"



class Player
{private:
	const char* Name{ set; get; };
	Location CurrentLocation{ set; get; };
public:
	void MoveNorth();
	void MoveEast();
	void MoveSouth();
	void MoveWest();
};

