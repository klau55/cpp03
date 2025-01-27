#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();                              // Default constructor
    ScavTrap(const std::string &name);       // Name constructor
    ScavTrap(const ScavTrap &other);         // Copy constructor
    ScavTrap &operator=(const ScavTrap &other); // Copy assignment operator
    ~ScavTrap();                             // Destructor

    // Member functions
    void attack(const std::string &target);
    void guardGate();
};

#endif