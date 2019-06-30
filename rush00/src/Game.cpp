#include "Game.hpp"
#include <unistd.h>
#include "CollectableItems.hpp"
#include "Steroid.hpp"
#include "SmallEnemy.hpp"

#include "Bullet.hpp"

#include <iostream>

std::ofstream g_fd("check_log.txt");

Game::Game(void)
{
	initscr();
	noecho();
	curs_set(false);
	nodelay(stdscr, true);

	_win = newwin(LINES, COLUMNS, 0, 0);
	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);

	_player = new Player(COLUMNS / 2, LINES - 2, 5);
	
	_steroids = new CollectableItems();
	_bullets = new CollectableItems();
	_enemies = new CollectableItems();
}

Game::~Game()
{
	delwin(_win);
	endwin();
}

Game::Game(Game const &other)
{
	*this = other;
}

Game &Game::operator =(Game const &other)
{
	if (this != &other)
	{
		_player = other._player;
	}
	return *this;
}

bool Game::checkPenetration(AItem *enemy)
{
	for (int i = 0; i < _bullets->getCount(); i++)
	{
		if (enemy->getX() == _bullets->getUnit(i)->getX() &&
			enemy->getY() == _bullets->getUnit(i)->getY())
		{
			return true;
		}
	}
	return false;
}

void Game::start()
{
	g_fd << "========= START GAME =========" << std::endl;
	srand(clock());

	int key = -1;

	// RANDOM STEROIDS
	for (int i = 0; i < 50; i++)
	{
		_steroids->push(new Steroid(rand() % COLUMNS, rand() % LINES));
	}

	// RANDOM ENEMIES
	for (int i = 0; i < 4; i++)
	{
		int rX = 2 + (rand() % 150);
		int rY = 1 + (rand() % 5);
		_enemies->push(new SmallEnemy(rX, rY));

	}

	_lastTime = clock();
	while (true)
	{
		if ((float)(clock() - _lastTime) / CLOCKS_PER_SEC < 0.1)
		{
			continue ;
		}	
		_lastTime = clock();

		wclear(_win);
		wattron(_win, COLOR_PAIR(1));
		box(_win, 0, 0);
		wattroff(_win, COLOR_PAIR(1));
		for (int i = 0; i < _steroids->getCount(); i++)
		{
			if (_steroids->getUnit(i)->getY() > LINES - 2)
				_steroids->getUnit(i)->setY(0);
			else if (_steroids->getUnit(i)->getX() > 0 && _steroids->getUnit(i)->getX() < COLUMNS - 2)
				mvwaddstr(_win, _steroids->getUnit(i)->getY(), _steroids->getUnit(i)->getX(), ".");
			_steroids->getUnit(i)->moveDown();
		}

		// PLAYER
		mvwaddstr(_win, _player->getY(), _player->getX(), "^");
		if (_player->getX() > 3 && key == 97)
			_player->moveLeft();
		if ( _player->getX() < COLUMNS - 3 && key == 100)
			_player->moveRight();
		
		if (key == 32)
		{
			Bullet *newBullet = _player->shoot();
			_bullets->push(newBullet);
		}

		// BULLETS
		for (int i = 0; i < _bullets->getCount(); i++)
		{
			if (_bullets->getUnit(i)->getY() > 0)
			{
				mvwaddstr(_win, _bullets->getUnit(i)->getY(), _bullets->getUnit(i)->getX(), "|");
				g_fd << _bullets->getUnit(i)->getX() << "|" << _bullets->getUnit(i)->getY() << std::endl;
			}

				_bullets->getUnit(i)->moveUp();
		}

		// ENEMIES
		for (int i = 0; i < _enemies->getCount(); i++)
		{
			if (_enemies->getUnit(i) != NULL && _enemies->getUnit(i)->getY() > LINES - 2)
				_enemies->getUnit(i)->setY(0);
			else if (_enemies->getUnit(i) != NULL && checkPenetration(_enemies->getUnit(i)) == true)
			{
				_enemies->setNullUnit(i);
				if (_enemies->getUnit(i) == NULL)
					g_fd << "NULL" << std::endl;
				else
				{
					g_fd << "NOT NULL" << std::endl;
				}
				

			}
			else if (_enemies->getUnit(i) != NULL)
			{
				mvwaddstr(_win, _enemies->getUnit(i)->getY(), _enemies->getUnit(i)->getX(), "#");
				// _enemies->getUnit(i)->moveDown();
			}
			
		}

		// g_fd << key << std::endl;
		// REFRESH
		wrefresh(_win);

		key = getch();

		if (key == 27)
			break ;
	}
}
