#ifndef GRAPHICALMODE_HPP
# define GRAPHICALMODE_HPP

# include "../frameworks/SDL2.framework/Headers/SDL.h"

# include "Info.hpp"
# include "IMonitorDisplay.hpp"

class GraphicalMode : public IMonitorDisplay
{
private:
	Info _info;

	SDL_Window *_win;
	SDL_Renderer *_ren;

	void displayStep1(std::vector<std::string> &allInfo);
	void displayStep2(std::vector<std::string> &allInfo);
	void displayStep3(std::vector<std::string> &allInfo);


public:
	GraphicalMode(void);
	~GraphicalMode();

	GraphicalMode(GraphicalMode const &other);
	GraphicalMode &operator =(GraphicalMode const &other);

	void displayData(void);
	void printText(std::string message, int x, int y, int w);

};



#endif