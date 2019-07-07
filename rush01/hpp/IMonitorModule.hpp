#ifndef IMONITORMODULE_HPP
# define IMONITORMODULE_HPP

class IMonitorModule
{

public:
	virtual std::vector<std::string> getDataModules(void) = 0;

};


#endif