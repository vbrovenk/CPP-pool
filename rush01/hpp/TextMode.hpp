#ifndef TEXTMODE_HPP
# define TEXTMODE_HPP

# include <ncurses.h>
# include <unistd.h>
# include "Info.hpp"
# include "IMonitorDisplay.hpp"

class TextMode : public IMonitorDisplay
{
private:
	Info _info;

	WINDOW *_step1;
	WINDOW *_step2;
	WINDOW *_step3;


	int LINES;
	int COLUMNS;

	int _pressedKey;

	void displayStep1(std::vector<std::string> &allInfo);
	void displayStep2(std::vector<std::string> &allInfo);
	void displayStep3(std::vector<std::string> &allInfo);


public:
	TextMode(void);
	~TextMode();

	TextMode(TextMode const &other);
	TextMode &operator =(TextMode const &other);

	void displayData(void);

};




#endif