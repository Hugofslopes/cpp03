/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:52:39 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/20 18:58:34 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), 
_energyPoints(10), _atackDamage(0) {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), 
_energyPoints(10), _atackDamage(0) {
    std::cout << "Parametrized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &Clap) : _name(Clap._name), _hitPoints(Clap._hitPoints), 
_energyPoints(Clap._energyPoints), _atackDamage(Clap._atackDamage) {
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other) {
		this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_atackDamage = other._atackDamage;
    }
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor constructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    if (this->_energyPoints == 0)
    {
        std::cerr << "ClapTrap " << this->_name  << " does not have enough energy points!" << std::endl;
        return ;
    }
    if (this->_hitPoints == 0)
    {
        std::cerr << "ClapTrap " << this->_name  << " does not have enough hit points!" << std::endl;
        return ;
    }
    
    std::cout << "ClapTrap " << this->_name << " attacks " << target 
    << ", causing " << _atackDamage << " points of damage!" << std::endl 
    << this->_name << " now has " << --this->_energyPoints << 
    " energy points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->_energyPoints == 0)
    {
        std::cerr << "ClapTrap " << this->_name  << " does not have enough energy points!" << std::endl;
        return ;
    }
    if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name  << " does not have enough hit points!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " took " <<  
    amount << " points of damage!" << std::endl; 
    
    amount < this->_hitPoints ? this->_hitPoints -= amount : this->_hitPoints == 0;

    std::cout << this->_name << " now has " << --this->_hitPoints << 
    " energy points" << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount){
    if (this->_energyPoints == 0)
    {
        std::cerr << "ClapTrap " << this->_name  << " does not have enough energy points!" << std::endl;
        return ;
    }

    if (this->_hitPoints == 0)
    {
        std::cerr << "ClapTrap " << this->_name  << " does not have enough hit points!" << std::endl;
        return ;
    }

    std::cout << "ClapTrap " << this->_name << " was repaired " << amount 
    << " points!" << std::endl;
    this->_energyPoints--;
    this->_hitPoints += amount;

    std::cout << this->_name << " now has " << --this->_hitPoints << 
    " energy points" << std::endl;
}