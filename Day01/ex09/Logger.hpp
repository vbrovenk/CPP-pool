#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>

class Logger
{

private:
	std::string _fileName;

	void	_logToConsole(std::string const &msg);
	void	_logToFile(std::string const &msg);

	std::string _makeLogEntry(std::string const &msg);


public:
	Logger(std::string fileName);
	
	void log(std::string const &dest, std::string const &message);

};

#endif