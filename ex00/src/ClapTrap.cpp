/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:52:39 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/21 18:16:10 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), 
_energyPoints(10), _attackDamage(0) {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), 
_energyPoints(10), _attackDamage(0) {
    std::cout << "Parametrized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &Clap) : _name(Clap._name), _hitPoints(Clap._hitPoints), 
_energyPoints(Clap._energyPoints), _attackDamage(Clap._attackDamage) {
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other) {
		this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(){
    std::cout << _name <<  " Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (!hasEandH(*this))
        return ;
    
    std::cout << "ClapTrap " << this->_name << " attacks " << target 
    << ", causing " << _attackDamage << " points of damage!" 
    << std::endl;
    _energyPoints--;
    
    dispEandH(*this);
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (!hasEandH(*this))
        return ;
    std::cout << "ClapTrap " << this->_name << " took " <<  
    amount << " points of damage!" << std::endl; 
    
    amount < this->_hitPoints ? this->_hitPoints -= amount : 
    this->_hitPoints = 0;
    
    dispEandH(*this);
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (!hasEandH(*this))
        return ;
    std::cout << "ClapTrap " << this->_name << " was repaired " << amount 
    << " points!" << std::endl;
    _energyPoints--;
    _hitPoints += amount;

    dispEandH(*this);
}

unsigned int ClapTrap::getValues(char c) const{
    if (c == 'e')
        return (_energyPoints);
    else if (c == 'h')
        return (_hitPoints);
    else if (c == 'a')
        return (_attackDamage);
    else
        std::cerr << "Input error";
    return (0);
}

std::string ClapTrap::getName( ) const{
    return (_name);
}

bool hasEandH(const ClapTrap &cp){
    if (cp.getValues('e') == 0)
    {
        std::cerr << "ClapTrap " << cp.getName()  << " does not have enough energy points!" 
        << std::endl << std::endl;
        return (false);
    }
    if (cp.getValues('h') == 0)
    {
        std::cerr << "ClapTrap " << cp.getName()  << " does not have enough hit points!" 
        << std::endl << std::endl;
        return (false);
    }
    return (true);
}

void dispEandH(const ClapTrap &cp) {
    std::cout << cp.getName() << " has " << cp.getValues('h') << 
    " hit points" << " and " << cp.getValues('e')
    << " energy points" <<  std::endl << std::endl;
}
