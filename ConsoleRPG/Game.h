#pragma once

#include "Character.h"
#include "Functions.h"
#include <ctime>
#include <cmath>



class Game
{
public:
	Game();
	virtual ~Game();

	//Operators

	//Functions
	void initGame();
	void mainMenu();

	//Accessors
	inline bool getPlaying() const { return this->playing; }


	//Modifiers	

private:
	int choice;
	bool playing;

	//Character related
	Character character;
};

