#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    {
        std::cout << "=== Creating ClapTrap ===" << std::endl;
        ClapTrap c1("CL4P");
        c1.attack("bandit");
        c1.takeDamage(5);
        c1.beRepaired(3);

        std::cout << "=== Creating ScavTrap ===" << std::endl;
        ScavTrap s1("SC4V");
        s1.attack("pirate");
        s1.takeDamage(30);
        s1.beRepaired(10);
        s1.guardGate();
    }

    std::cout << "=== End of main scope ===" << std::endl;
    return 0;
}