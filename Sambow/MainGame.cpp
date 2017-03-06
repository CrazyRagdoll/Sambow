#include "MainGame.h"



MainGame::MainGame()
{
	_window = nullptr;
	_screenWidth = 1024;
	_screenHeight = 768;
}


MainGame::~MainGame()
{
}


//Run the game
void MainGame::run() {
	initSystems();
}

//Inialise everything needed to run the game
void MainGame::initSystems() {
	//initalise SDL
	SDL_Init(SDL_INIT_EVERYTHING);

	//Create an SDL window
	_window = SDL_CreateWindow("SamBow Game Engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, _screenWidth, _screenHeight, SDL_WINDOW_OPENGL);
}