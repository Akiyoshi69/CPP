#include "../includes/ClapTrap.hpp"

/*____________Not enough hitPoints___________*/

int main(void)
{
	ClapTrap	Emmanuel("Macron");

	Emmanuel.setDamage(3);
	Emmanuel.takeDamage(4);
	Emmanuel.beRepaired(2);
	Emmanuel.takeDamage(4);
	Emmanuel.takeDamage(4);
	return (0);
}


/*___________Not enough energyPoints__________*/

// int main(void)
// {
// 	ClapTrap	Player("Macron");

// 	Player.setDamage(3);
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.takeDamage(4);
// 	Player.beRepaired(2);
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.beRepaired(2);
// 	return (0);
// }

/*_____________________Dead___________________*/

// int main(void)
// {
// 	ClapTrap	Player("Macron");

// 	Player.setDamage(3);
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.takeDamage(4);
// 	Player.beRepaired(2);
// 	Player.takeDamage(8);
// 	Player.takeDamage(8);
// 	Player.beRepaired(2);
// 	Player.attack("Melenchon");
// 	return (0);
// }