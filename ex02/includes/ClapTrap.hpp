/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:53:07 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/21 18:00:30 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
    public:
        ClapTrap();    
        ClapTrap(const std::string _name);
        ClapTrap(const ClapTrap &Clap);
        ClapTrap& operator=(const ClapTrap &other);
        ~ClapTrap();

        void            attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        unsigned int    getValues(char c) const;
        std::string     getName(void) const;
        
    protected:
        std::string		_name;
        unsigned int	_hitPoints;
        unsigned int	_energyPoints;
        unsigned int	_attackDamage;
};
bool hasEandH(const ClapTrap &c);
void dispEandH(const ClapTrap &c);
#endif
