#include "ClapTrap.hpp"

int main() {
    // create a default ClapTrap object
    ClapTrap defaultClap;
    
    // Create two ClapTrap objects
    ClapTrap clap("CL4P-TP");
    ClapTrap bot("BOT-9000");

    
    // Demonstrate attacks
    clap.attack("BOT-9000");
    bot.takeDamage(0);  // no actual damage.

    // Give clap a few hits to show takeDamage
    clap.takeDamage(-5000);


    // Attempt repairs
    clap.beRepaired(-1);
    clap.beRepaired(2);
    clap.beRepaired(2);
    
    // Exhaust energy
    for (int i = 0; i < 10; i++) {
        bot.attack("CL4P-TP");
    }

    // Try to repair when out of energy
    bot.beRepaired(2);

    return 0;
}
