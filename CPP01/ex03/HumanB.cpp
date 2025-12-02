#include "HumanB.hpp"

HumanB::HumanB(std::string n) : weapon(NULL), name(n) {
}

void	HumanB::attack() {
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " can not attack without a weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &w) {
	weapon = &w;
}