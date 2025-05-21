#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() {
    _name = "default";
    _hitPoints = 100; 
    _energyPoints = 50;
    _atackDamage = 20;
    std::cout << " ScavTrap default constructor called" << std::endl;
}    

ScavTrap::ScavTrap(const std::string _name) {
    this->_name = _name;
    _hitPoints = 100; 
    _energyPoints = 50;
    _atackDamage = 20;
    std::cout << "ScavTrap Parametrized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other){
        this->_name = other._name;
        this->_hitPoints =  other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_atackDamage = other._atackDamage;
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other){
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints =  other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_atackDamage = other._atackDamage;
    }
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gatekeeper mode" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    if (this->_energyPoints == 0)
    {
        std::cerr << "ScavTrap " << this->_name  << " does not have enough energy points!" << std::endl;
        return ;
    }
    if (this->_hitPoints == 0)
    {
        std::cerr << "ScavTrap " << this->_name  << " does not have enough hit points!" << std::endl;
        return ;
    }
    
    std::cout << "ScavTrap " << this->_name << " attacks " << target 
    << ", causing " << _atackDamage << " points of damage!" << std::endl 
    << this->_name << " now has " << --this->_energyPoints << 
    " energy points" << std::endl;
}
