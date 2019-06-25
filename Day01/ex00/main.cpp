#include <iostream>

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony *heapPony = new Pony("PonyOnHeap", "red");

	delete heapPony;

}

void	ponyOnTheStack(void)
{
	Pony stackPony = Pony("PonyOnStack", "black");
}

int main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();

	// system("leaks a.out");
	return 0;
}