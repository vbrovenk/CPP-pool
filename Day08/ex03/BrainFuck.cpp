#include "BrainFuck.hpp"
#include <fstream>

BrainFuck::BrainFuck(void)
{
	_pointer = 0;
}

BrainFuck::~BrainFuck(void)
{

}

BrainFuck::BrainFuck(BrainFuck const &other)
{
	*this = other;
}

bool BrainFuck::validInstruction(char instruc)
{
	std::array<char, 8> insts = {'>', '<', '+', '-', '.', ',', '[', ']'};

	std::array<char, 8>::const_iterator findInstr;

	findInstr = std::find(insts.begin(), insts.end(), instruc);
	if (findInstr != insts.end())
		return true;

	return false;
}

BrainFuck::BrainFuck(std::ifstream &ifs)
{
	char c;
	_pointer = 0;


	while (ifs.get(c))
	{
		if (validInstruction(c))
		{
			// std::cout << "Valid instr" << std::endl;
			_code.push_back(c);

			if (c == '[')
				;

		}
		else
			std::cout << "Not Valid instr" << std::endl;

	}
}

void BrainFuck::run(void)
{
	for (int i = 0; i < 20; i++)
		std::cout << cpu[i] << " ";
	std::cout << std::endl;

	int brc = 0;
	for (int i = 0; i < _code.size(); i++)
	{
		if (_code[i] == '>')
			_pointer++;
		else if (_code[i] == '<')
			_pointer--;
		else if (_code[i] == '+')
			cpu[_pointer] += 1;
		else if (_code[i] == '-')
			cpu[_pointer] -= 1;
		else if (_code[i] == '.')
			std::cout << cpu[_pointer];
		else if (_code[i] == ',')
			std::cin >> cpu[_pointer];

		if(_code[i] == '[') //Если символ открывающаяся скобка реализуем цикл/условный переход.
		{
			if(!cpu[_pointer]) //Если значение по текущему адресу ноль.
			{
				// ++brc; //Инкрементируем счетчик скобок.
				while(brc) // Пока есть не закрытые скобки.
				{
					++i; //К следующему символу.
					if (_code[i] == '[') ++brc; //Открываем скобку.
					if (_code[i] == ']') --brc; //Закрываем скобку.
				}
			}
			else
				continue; //Если не ноль берем следующий символ.
		}
		else if(_code[i] == ']') //Если скобка заркывающаяся.
		{
			if(!cpu[_pointer]) //Если значение по адресу ноль.
			{
					continue; //Переходим к следующему символу.
			}
			else //Если не ноль.
			{
				if(_code[i] == ']') brc++; //Если скобка закрывающаяся  инкрементируем счетчик скобок.
				while(brc) //Пока есть незакрытые скобки.
				{
					--i; // Смотрим предыдущий символ.
					if(_code[i] == '[') brc--; //Если скобка открытая декрементируем счетчик.
					if(_code[i] == ']') brc++; //Если закрытая инкрементируем счетчик.
				}
				--i; //Смотрим предыдущий символ.
			}
		}
	}
	std::cout << std::endl;

	for (int i = 0; i < 20; i++)
		std::cout << cpu[i] << " ";
	std::cout << std::endl;
	
}


BrainFuck &BrainFuck::operator =(BrainFuck const &other)
{
	if (this != &other)
	{
		_pointer = other._pointer;
	}

	return *this;
}
