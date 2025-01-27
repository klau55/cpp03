#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
    : ClapTrap("DefaultScav")
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called for " 
              << _name << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
    : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap name constructor called for " 
              << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
    : ClapTrap(other)
{
    *this = other;
    std::cout << "ScavTrap copy constructor called for " 
              << _name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap copy assignment operator called for " 
              << _name << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called for " 
              << _name << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (_hitPoints <= 0) {
        std::cout << "ScavTrap " << _name 
                  << " cannot attack (no hit points left)!" 
                  << std::endl;
    return;
    }
    if (_energyPoints <= 0) {
        std::cout << "ScavTrap " << _name 
                  << " cannot attack (no energy left)!" 
                  << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ScavTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage!"
              << std::endl;
}
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode" << std::endl;
}