#include "mutantstack.hpp"

#include <iostream>

int main(void)
{
	MutantStack<int>    mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	std::cout << "=================" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	// //[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;

	while(it != ite)
	{
		std::cout << *it << std::endl;

		++it;
	}
	std::cout << "========== ORIG STACK =======" << std::endl;
	std::stack<int> s(mstack);
	std::cout << s.top() << std::endl;

	std::cout << "========== STRING STACK =======" << std::endl;
	
	MutantStack<std::string> st;
	st.push("str1");
	st.push("str2");
	st.push("str3");
	std::cout << "SIZE: " << st.size() << std::endl;
	st.push("str4");
	st.push("str5");
	st.push("str6");

	MutantStack<std::string>::iterator itStr = st.begin();

	for (; itStr != st.end(); itStr++)
	{
		std::cout << *itStr << std::endl;
	}
	std::cout << "SIZE: " << st.size() << std::endl;
	

	return 0;
}