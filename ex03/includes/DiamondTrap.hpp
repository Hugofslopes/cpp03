/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:57:12 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/21 17:29:46 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

    public:
        DiamondTrap();    
        DiamondTrap(const std::string _name);
        DiamondTrap(const DiamondTrap &Clap);
        DiamondTrap& operator=(const DiamondTrap &other);
        ~DiamondTrap();

        void whoAmI();
    
    private:
        std::string _name;
        ScavTrap scavTrap;
};
#endif