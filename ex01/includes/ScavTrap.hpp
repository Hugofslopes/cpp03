
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : ClapTrap{

    public:
        ScavTrap();    
        ScavTrap(const std::string _name);
        ScavTrap(const ScavTrap &Clap);
        ScavTrap& operator=(const ScavTrap &other);
        ~ScavTrap();

        void guardGate();
};

#endif