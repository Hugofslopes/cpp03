/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 18:02:24 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/21 20:45:36 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    _name = "Default Frag";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string _name) {
    this->_name = _name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap parametrize constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(){
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
    if (this != &other)
    {   _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << _name << " FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "High five ? Why not!! :))" << std::endl << std::endl;;
}
