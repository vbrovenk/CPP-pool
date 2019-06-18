#include "Logger.hpp"


Logger::Logger(std::string fileName) : _fileName(fileName)
{

}


void	Logger::_logToConsole(std::string const &msg)
{
	std::cout << msg;
}


void	Logger::_logToFile(std::string const &msg)
{
	std::ofstream ofs(_fileName, std::ios::app);
	ofs << msg;

	ofs.close();
}

std::string Logger::_makeLogEntry(std::string const &msg)
{
	time_t rawtime;
	struct tm *timeinfo;
	char buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "[%G.%e.%m_%H:%M:%S] ", timeinfo);

	std::string newMsg = buffer;
	newMsg += msg;
	newMsg += "\n";
	return newMsg;
}


void Logger::log(std::string const &dest, std::string const &message)
{
	std::string readyLog = _makeLogEntry(message);

	void (Logger::*funcPtrs[])(std::string const &msg) {
		&Logger::_logToConsole,
		&Logger::_logToFile
	};

	std::string funcNames[] {
		"_logToConsole",
		"_logToFile"
	};

	bool find = false;

	for (int i = 0; i < 2; i++)
	{
		if (dest == funcNames[i])
		{
			find = true;
			(this->*funcPtrs[i])(readyLog);
			break ;
		}
	}
	if (find == false)
		std::cout << "Logging: " << dest << " - failed." << std::endl;
}
