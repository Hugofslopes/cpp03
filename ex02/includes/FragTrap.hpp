#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"

class FragTrap : ClapTrap{

    public:
        FragTrap();    
        FragTrap(const std::string _name);
        FragTrap(const FragTrap &Clap);
        FragTrap& operator=(const FragTrap &other);
        ~FragTrap();

        
};

#endif