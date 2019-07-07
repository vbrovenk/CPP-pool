#include "GraphicalMode.hpp"

GraphicalMode::GraphicalMode(void)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
	{
		std::cout << "SDL error" << std::endl;
		exit(1);
	}

	_win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
	_ren = SDL_CreateRenderer(_win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	// SDL_RenderClear(_ren);
	// SDL_RenderPresent(_ren);
	SDL_Delay(100);
}

GraphicalMode::~GraphicalMode()
{

}

GraphicalMode::GraphicalMode(GraphicalMode const &other)
{
	*this = other;
}

GraphicalMode &GraphicalMode::operator =(GraphicalMode const &other)
{
	if (this != &other)
	{

	}

	return *this;
}

void GraphicalMode::displayData(void)
{

}
