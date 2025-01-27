#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    // Constructors & Destructor
    FragTrap();                        // Default constructor
    FragTrap(const std::string &name); // Param constructor
    FragTrap(const FragTrap &other);   // Copy constructor
    FragTrap &operator=(const FragTrap &other); // Copy assignment
    ~FragTrap();

    // Overridden member function (optional if you want a custom attack message)
    void attack(const std::string &target);

    // New special capacity
    void highFivesGuys(void);
};

#endif