#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap()
    : ClapTrap("Default_Frag")
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called for " << _name << std::endl;
}

// Param constructor
FragTrap::FragTrap(const std::string &name)
    : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap name constructor called for " << _name << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &other)
    : ClapTrap(other)
{
    *this = other;
    std::cout << "FragTrap copy constructor called for " << _name << std::endl;
}

// Copy assignment operator
FragTrap &FragTrap::operator=(const FragTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap copy assignment operator called for " << _name << std::endl;
    return *this;
}

// Destructor
FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called for " << _name << std::endl;
}

// Overridden attack
void FragTrap::attack(const std::string &target) {
    if (_hitPoints <= 0) {
        std::cout << "FragTrap " << _name
                  << " cannot attack (no hit points)!" << std::endl;
        return;
    }
    if (_energyPoints <= 0) {
        std::cout << "FragTrap " << _name
                  << " cannot attack (no energy)!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "FragTrap " << _name << " hurls grenades at " << target
              << ", causing " << _attackDamage
              << " points of damage!" << std::endl;
}

// Special function
void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _name
              << " requests a positive high five! ✋" << std::endl;
}
