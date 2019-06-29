#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"


void check_func()
{
	std::cout << "============= SQUAD 2 ===============" << std::endl;
	// Squad squad2;

	// ISpaceMarine* rond = new TacticalMarine;
	// squad2.push(rond);
	// squad2.push(rond);

	
	// for (int i = 0; i < squad2.getCount(); ++i)
	// {
	// 	squad2.getUnit(i)->battleCry();
	// 	squad2.getUnit(i)->rangedAttack();
	// 	squad2.getUnit(i)->meleeAttack();
	// }

	// ISpaceMarine* bob = new TacticalMarine;
	// ISpaceMarine* jim = new AssaultTerminator;
	// ISquad* vlc = new Squad;
	// vlc->push(bob);
	// vlc->push(jim);
	// for (int i = 0; i < vlc->getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = vlc->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }
	// delete vlc;

	// ------------------------------------------
	Squad sq1;
	Squad sq2;


	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	sq1.push(bob);
	sq1.push(jim);

	ISpaceMarine* jim2 = new AssaultTerminator;
	sq2.push(jim2);

	sq2 = sq1;

}

void func2()
{
	{
		Squad sq1;
		Squad sq2;
		sq2 = sq1;
	}
	{
		Squad sq1;
		Squad sq2;
		TacticalMarine *m1 = new TacticalMarine;
		TacticalMarine *m2 = new TacticalMarine;
		sq1.push(m1);
		sq1.push(m2);
		sq2 = sq1;
	}
}

void func(void)
{
	Squad sq1;
	Squad sq2;

	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* ken = new TacticalMarine;
	ISpaceMarine* mark = new AssaultTerminator;
	
	sq1.push(bob);
	sq1.push(bob);
	sq1.push(jim);

	sq2.push(ken);
	sq2.push(mark);

	sq2 = sq1;

	for (int i = 0; i < sq2.getCount(); ++i)
		sq2.getUnit(i)->battleCry();
}



int main()
{
	// ISpaceMarine* bob = new TacticalMarine;
	// ISpaceMarine* jim = new AssaultTerminator;

	// ISpaceMarine* rold = new TacticalMarine;


	// ISquad* vlc = new Squad;
	// vlc->push(bob);
	// vlc->push(jim);
	// vlc->push(jim);
	// vlc->push(rold);

	// for (int i = 0; i < vlc->getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = vlc->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }

	// check_func();

	func();
	func2();

	system("leaks ex02");
	// delete vlc;

	return 0;
}