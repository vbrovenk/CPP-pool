#include "TextMode.hpp"

TextMode::TextMode(void) : LINES(15) , COLUMNS(40)
{
	initscr();
	noecho();
	curs_set(false);
	nodelay(stdscr, true);
	keypad(stdscr, TRUE);
	refresh();

	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_CYAN, COLOR_BLACK);
	init_pair(4, COLOR_YELLOW, COLOR_BLACK);


	_step1 = newwin(LINES, COLUMNS, 0, 0);
	_step2 = newwin(LINES, COLUMNS, 0, COLUMNS + 1);
	_step3 = newwin(LINES, COLUMNS, LINES + 1, 20);


}

TextMode::~TextMode()
{
	delwin(_step1);
	delwin(_step2);
	delwin(_step3);

	endwin();
}

TextMode::TextMode(TextMode const &other)
{
	*this = other;
}

TextMode &TextMode::operator =(TextMode const &other)
{
	if (this != &other)
	{

	}

	return *this;
}

void TextMode::displayStep1(std::vector<std::string> &allInfo)
{
	wclear(_step1);

	box(_step1, 0, 0);
	mvwprintw(_step1, 1, 15, "< STEP 1 >");
	mvwprintw(_step1, 3, 2, "Hostname: %s", allInfo[0].c_str());
	mvwprintw(_step1, 4, 2, "Username: %s", allInfo[1].c_str());

	mvwprintw(_step1, 6, 15, "OS Info:");
	mvwprintw(_step1, 7, 4, "%s", allInfo[2].c_str());

	mvwprintw(_step1, 11, 2, "Time: %s", allInfo[3].c_str());
	wrefresh(_step1);

}

void TextMode::displayStep2(std::vector<std::string> &allInfo)
{
	wclear(_step2);

	box(_step2, 0, 0);

	mvwprintw(_step2, 1, 15, "< STEP 2 >");
	mvwprintw(_step2, 3, 2, "%s", allInfo[4].c_str());
	mvwprintw(_step2, 6, 2, "PhysMem: %s", allInfo[5].c_str());

	wrefresh(_step2);

}

void TextMode::displayStep3(std::vector<std::string> &allInfo)
{
	wclear(_step3);

	box(_step3, 0, 0);

	mvwprintw(_step3, 1, 15, "< STEP 3 >");
	mvwprintw(_step3, 3, 16, "NETWORK");

	mvwprintw(_step3, 5, 2, "packets: %s in", allInfo[6].c_str());
	mvwprintw(_step3, 7, 2, "packets: %s out", allInfo[7].c_str());

	wrefresh(_step3);

}


void TextMode::displayData(void)
{
	std::vector<std::string> allInfo;

	while (_pressedKey != 27)
	{
		allInfo = _info.getDataModules();
		
		displayStep1(allInfo);
		displayStep2(allInfo);
		displayStep3(allInfo);


		_pressedKey = getch();
		usleep(10000);
	}

}
