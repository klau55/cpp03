#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
    : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
    std::cout << "ClapTrap default constructor called for " 
              << _name << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap name constructor called for " 
              << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    // Use the copy assignment operator to copy attributes
    *this = other;
    std::cout << "ClapTrap copy constructor called for " 
              << _name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other) {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
        // this = other
    }
    std::cout << "ClapTrap copy assignment operator called for " 
              << _name << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called for " 
              << _name << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name 
                  << " cannot attack (no hit points left)!" 
                  << std::endl;
        return;
    }
    if (_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name 
                  << " cannot attack (no energy left)!" 
                  << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage!"
              << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name 
                  << " is already out of hit points and can't take more damage."
                  << std::endl;
        return;
    }
    // fddgdfgdfgddfggdfg proverki
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " 
              << amount << " points of damage! ";
    if (_hitPoints <= 0) {
        _hitPoints = 0;
        std::cout << "It is now destroyed." << std::endl;
    } else {
        std::cout << "It has " << _hitPoints 
                  << " hit points left." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name 
                  << " cannot be repaired (it is destroyed)!"
                  << std::endl;
        return;
    }
    if (_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name 
                  << " cannot be repaired (no energy left)!" 
                  << std::endl;
        return;
    }
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " is repaired by " 
              << amount << " points! It now has " << _hitPoints 
              << " hit points." << std::endl;
}
