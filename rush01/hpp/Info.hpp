#ifndef INFO_HPP
# define INFO_HPP

# include <iostream>
# include <array>
# include <vector>
# include <algorithm>

# include "IMonitorModule.hpp"


class Info : public IMonitorModule
{
private:
	std::string _hostName;
	std::string _userName;
	std::string _OS;
	std::string _dateTime;

	std::string _CPUusage;
	std::string _physMem;

	std::string _networkIn;
	std::string _networkOut;


public:
	Info(void);
	~Info();

	Info(Info const &other);
	Info &operator =(Info const &other);

	std::vector<std::string> getDataModules(void);

	std::string exec(std::string comand);
};


#endif