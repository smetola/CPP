#include "Zombie.hpp"

int	main(void) {
	Zombie *heapZombie = newZombie("Sasha");
	heapZombie->announce();
	delete heapZombie;

	randomChump("Nemo");
	return 0;
}