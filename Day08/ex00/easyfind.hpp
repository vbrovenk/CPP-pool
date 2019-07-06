#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm>


template <typename T>
void easyfind(T &container, int target)
{
	typename T::const_iterator findElement;

	findElement = std::find(container.begin(), container.end(), target);

	if (findElement != container.end())
		std::cout << "FIND!" << std::endl;
	else
		throw std::exception();

}

#endif