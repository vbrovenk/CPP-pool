#include "Info.hpp"
# include <stdio.h>

Info::Info(void)
{
	_hostName = "hostname";
	_userName = "whoami";
	_OS = "sw_vers";
	_dateTime = "date";

	_CPUusage = "top -l 1 | grep 'CPU usage:' |  cut -d' ' -f3";
	// _CPUusage = "top -l 1 | grep 'CPU usage:'";

	_physMem = "top -l 1 | grep 'PhysMem:' |  cut -d' ' -f2";

	_networkIn = "top -l 1 | grep 'Networks:' |  cut -d' ' -f3";
	_networkOut = "top -l 1 | grep 'Networks:' |  cut -d' ' -f5";

}

Info::~Info()
{
}

Info::Info(Info const &other)
{
	*this = other;
}

Info &Info::operator =(Info const &other)
{
	if (this != &other)
	{

	}

	return *this;
}

std::vector<std::string> Info::getDataModules(void)
{
	std::vector<std::string> allInfo;
	std::string temp;

	temp = exec(_hostName);
	temp.erase (std::remove(temp.begin(), temp.end(), '\n'), temp.end());
	allInfo.push_back(temp);
	
	temp = exec(_userName);
	temp.erase (std::remove(temp.begin(), temp.end(), '\n'), temp.end());
	allInfo.push_back(temp);
	
	allInfo.push_back(exec(_OS).c_str());

	temp = exec(_dateTime);
	temp.erase (std::remove(temp.begin(), temp.end(), '\n'), temp.end());
	allInfo.push_back(temp);

	temp = exec(_CPUusage);
	temp.erase (std::remove(temp.begin(), temp.end(), '\n'), temp.end());
	allInfo.push_back(temp);

	temp = exec(_physMem);
	temp.erase (std::remove(temp.begin(), temp.end(), '\n'), temp.end());
	allInfo.push_back(temp);
	
	temp = exec(_networkIn);
	temp.erase (std::remove(temp.begin(), temp.end(), '\n'), temp.end());
	allInfo.push_back(temp);

	temp = exec(_networkOut);
	temp.erase (std::remove(temp.begin(), temp.end(), '\n'), temp.end());
	allInfo.push_back(temp);

	return allInfo;
}

std::string Info::exec(std::string comand)
{
	std::array<char, 128> buffer;
	std::string returnString;
	std::shared_ptr<FILE> pipe(popen(comand.c_str(), "r"), pclose);

	// if (!pipe) throw std::runtime_error("Error with pipe");
	while (!feof(pipe.get())) {
		if (fgets(buffer.data(), 128, pipe.get()) != nullptr)
			returnString += buffer.data();
	}

	// std::cout << returnString << std::endl;

	return returnString;
}

