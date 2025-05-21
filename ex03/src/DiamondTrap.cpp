/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:04:48 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/21 20:41:16 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("default_clap_name"){
    _name = "default";
    _hitPoints = FragTrap::getValues('h');
    _energyPoints = scavTrap.getValues('e');
    _attackDamage = FragTrap::getValues('a');

    std::cout << "Diamond default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name") {
    _name = name;
    _hitPoints = FragTrap::getValues('h');
    _energyPoints = scavTrap.getValues('e');
    _attackDamage = FragTrap::getValues('a');

    std::cout << "Diamond parametrized constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(), ScavTrap(), FragTrap(){
    this->_name = other._name;
    ClapTrap::_name  = other._name + "_clap_name";
    _hitPoints = other.FragTrap::_hitPoints;
    _energyPoints = other.ScavTrap::_energyPoints;
    _attackDamage = other.FragTrap::_attackDamage;

    std::cout << "Diamond copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other){
    if (this != &other)
    {   
        this->_name = other._name;
        ClapTrap::_name  = other._name + "_clap_name";
        _hitPoints = other.FragTrap::_hitPoints;
        _energyPoints = other.ScavTrap::_energyPoints;
        _attackDamage = other.FragTrap::_attackDamage;
    }

    std::cout << "Diamond copy assignment operator called" << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap(){
    std::cout << _name << " Diamond Destructor called" << std::endl;
}

void DiamondTrap::whoAmI(){
    std::cout << "My name is " << _name << " and my ClapTrap name is " << 
    ClapTrap::_name << std::endl << std::endl;
}