#include <iostream>


class Base {
	public:
		virtual ~Base() {}
};

class A : public Base {

};

class B : public Base {

};

class C : public Base {

};


Base * generate(void)
{
	srand(time(NULL));

	int index = 1 + rand() % 3;

	std::cout << "index = " << index << std::endl;

	if (index == 1)
		return new A;
	else if (index == 2)
		return new B;
	else if (index == 3)
		return new C;
	return NULL;
}

void identify_from_pointer( Base * p )
{
	if (dynamic_cast<A *> (p))
		std::cout << "class A" << std::endl;
	else if (dynamic_cast<B *> (p))
		std::cout << "class B" << std::endl;
	else if (dynamic_cast<C *> (p))
		std::cout << "class C" << std::endl;
	else if (dynamic_cast<Base *> (p))
		std::cout << "class Base" << std::endl;
	else
		std::cout << "unknown class" << std::endl;

}


void identify_from_reference( Base & p )
{
	if (dynamic_cast<A *> (&p))
		std::cout << "class A" << std::endl;
	else if (dynamic_cast<B *> (&p))
		std::cout << "class B" << std::endl;
	else if (dynamic_cast<C *> (&p))
		std::cout << "class C" << std::endl;
	else if (dynamic_cast<Base *> (&p))
		std::cout << "class Base" << std::endl;
	else
		std::cout << "unknown class" << std::endl;
}

int main(void)
{
	Base *parent = generate();
	Base *parent2 = new Base();

	identify_from_pointer(parent);
	identify_from_pointer(parent2);

	identify_from_reference(*parent);
	identify_from_reference(*parent2);
	return 0;
}