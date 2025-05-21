/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 20:37:23 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/21 20:43:20 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() {
    _name = "default Scav";
    _hitPoints = 100;
    _energyPoints = 50; 
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}  

ScavTrap::ScavTrap(const std::string name) {
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50; 
    _attackDamage = 20;
    std::cout << "ScavTrap parametrized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(){
    _name = other._name;
    _hitPoints =  other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other){
    if (this != &other)
    {
        _name = other._name;
        _hitPoints =  other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout << _name << " ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gatekeeper mode" << std::endl;
}
