#include "Logger.hpp"

int main(void)
{
	std::string console = "_logToConsole";
	std::string file = "_logToFile";

	Logger log1("check.txt");

	log1.log(console, "Emchendem");
	log1.log(file, "Nozka nosorozhka");

	return 0;
}