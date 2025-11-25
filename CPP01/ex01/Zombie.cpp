#include "Zombie.hpp"

Zombie::Zombie() : name("") {
}

Zombie::Zombie(std::string n) : name(n) {
}

Zombie::~Zombie() {
	std::cout << name << " has died" << std::endl;
}

void		Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string n) {
	name = n;
}