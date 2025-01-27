#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    {
        std::cout << "\n=== Creating a ClapTrap ===" << std::endl;
        ClapTrap c("CL4P");
        c.attack("a bandit");
        c.takeDamage(3);
        c.beRepaired(2);

        std::cout << "\n=== Creating a ScavTrap ===" << std::endl;
        ScavTrap s("SC4V");
        s.attack("an enemy");
        s.takeDamage(20);
        s.beRepaired(10);
        s.guardGate();

        std::cout << "\n=== Creating a FragTrap ===" << std::endl;
        FragTrap f("FR4G");
        f.attack("a big boss");
        f.takeDamage(50);
        f.beRepaired(25);
        f.highFivesGuys();
    }

    std::cout << "\n=== End of main scope ===" << std::endl;
    return 0;
}
