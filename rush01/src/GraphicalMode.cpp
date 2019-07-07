#include "GraphicalMode.hpp"
# include "../frameworks/SDL2_ttf.framework/Headers/SDL_ttf.h"

#include <sstream>

GraphicalMode::GraphicalMode(void)
{
	SDL_Init(SDL_INIT_VIDEO);

	_win = SDL_CreateWindow("GRAPHICAL", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 720, 1080, SDL_WINDOW_SHOWN);
	_ren = SDL_CreateRenderer(_win, -1, SDL_RENDERER_ACCELERATED);

}

GraphicalMode::~GraphicalMode()
{
	SDL_DestroyRenderer(_ren);
	SDL_DestroyWindow(_win);
	SDL_Quit();
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

void GraphicalMode::printText(std::string message, int x, int y, int w)
{
	SDL_Rect rect;

	SDL_Color clr = {0, 255, 159, 0};

	rect.x = x;
	rect.y = y;
	rect.w = w;
	rect.h = 40;

	TTF_Font* font = TTF_OpenFont("Roboto-Black.ttf", 30);
	SDL_Surface* textSurface = TTF_RenderText_Solid(font, message.c_str(), clr);

	SDL_Texture *texture = SDL_CreateTextureFromSurface(_ren, textSurface);
	SDL_RenderCopy(_ren, texture, NULL, &rect);
	SDL_FreeSurface(textSurface);
}

void GraphicalMode::displayStep1(std::vector<std::string> &allInfo)
{
	std::string tmp = "Hostname: " + allInfo[0];
	printText(tmp, 4, 6, 300);
	tmp = "Username: " + allInfo[1];
	printText(tmp, 4, 46, 300);

	// printText(allInfo[2], 4, 66, 600);
	
	tmp = "Time: " + allInfo[3];
	printText(tmp, 4, 80, 400);


	printText("OS Info:", 250, 360, 200);


	// printText(allInfo[2].get, 50, 420, 200);
	int x = 50;
	int y = 420;
	size_t pos;
	while ((pos = allInfo[2].find('\n')) != std::string::npos) {
    std::string token = allInfo[2].substr(0, pos);
	printText(token, x, y, 300);
	y += 50;
	allInfo[2].erase(0, pos + 1);
}
	
}

void GraphicalMode::displayStep2(std::vector<std::string> &allInfo)
{
	std::string tmp = "CPU_Usage: " + allInfo[4];

	printText(tmp, 4, 140, 300);

	std::stringstream sstr;
	sstr << allInfo[4];

	std::vector<std::string> vec;
	{
		std::string temp;
		while (sstr >> temp)
		{
			vec.push_back(temp);
		}
	}

	tmp = "[*";
	float percent = atof(vec[0].c_str());

	int last = percent / 10.0;
	for (int i = 0; i < last; i++)
	{
		tmp += "*";
	}
	for (int i = last + 1; i < 10 - last; i++)
		tmp += " ";
	tmp += "]";

	printText(tmp, 350, 140, 200);


	// ========== RAM ============
	tmp = "RAM: " + allInfo[5];
	printText(tmp, 4, 300, 300);


}

void GraphicalMode::displayStep3(std::vector<std::string> &allInfo)
{
	std::string tmp = "packets: " + allInfo[6] + " in";

	printText(tmp, 4, 200, 300);

	tmp = "packets: " + allInfo[7] + " out";

	printText(tmp, 4, 240, 300);

}


void GraphicalMode::displayData(void)
{

	std::vector<std::string> allInfo;
	TTF_Init();
	
	SDL_Event e;
	bool end = false;
	while (!end)
	{
		while (SDL_PollEvent(&e))
			if (e.type == SDL_QUIT)
				end = true;

			SDL_RenderClear(_ren);

			SDL_Rect rect;
			rect.x = 0;
			rect.y = 0;
			rect.h = 1080;
			rect.w = 720;

			SDL_SetRenderDrawColor(_ren, 0, 0, 255, 0);
			SDL_RenderFillRect(_ren, &rect);

			allInfo = _info.getDataModules();

			displayStep1(allInfo);
			displayStep2(allInfo);
			displayStep3(allInfo);


			SDL_RenderPresent(_ren);

		
	}
}
