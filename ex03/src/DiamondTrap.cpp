/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:04:48 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/21 17:37:19 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap(){
    _name = "default";
    ClapTrap::_name  = _name + "_clap_name";
    _hitPoints = FragTrap::getValues('h');
    _energyPoints = scavTrap.getValues('e');
    _attackDamage = FragTrap::getValues('a');

    std::cout << "Diamond default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string _name) : ClapTrap(),
ScavTrap(), FragTrap() {
    ClapTrap::_name  = _name + "_clap_name";
    this->_name = _name;
    _hitPoints = FragTrap::getValues('h');
    _energyPoints = scavTrap.getValues('e');
    _attackDamage = FragTrap::getValues('a');

    std::cout << "Diamond parametrized constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other){
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