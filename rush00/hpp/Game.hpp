#ifndef GAME_HPP
# define GAME_HPP

# include <ncurses.h>
# include "Player.hpp"
# include <fstream>


class CollectableItems;

extern std::ofstream g_fd;

class Game
{

private:
	static const int COLUMNS = 180;
	static const int LINES = 40;

	double _lastTime;

	WINDOW *_win;

	Player *_player;

	CollectableItems *_steroids;
	CollectableItems *_bullets;
	CollectableItems *_enemies;

public:
	Game(void);
	Game(Game const &other);
	~Game();

	Game &operator =(Game const &other);
	void start();

	bool checkPenetration(AItem *enemy);
};




#endif