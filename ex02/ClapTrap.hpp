#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
protected:
    std::string _name;
    int         _hitPoints;
    int         _energyPoints;
    int         _attackDamage;

public:
    ClapTrap();                              // Default constructor
    ClapTrap(const std::string &name);       // Name constructor
    ClapTrap(const ClapTrap &other);         // Copy constructor
    ClapTrap &operator=(const ClapTrap &other); // Copy assignment operator
    ~ClapTrap();                             // Destructor

    // Member functions
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
