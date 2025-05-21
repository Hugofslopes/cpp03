/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:55:11 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/21 14:56:41 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : ClapTrap{
    public:
        ScavTrap();    
        ScavTrap(const std::string _name);
        ScavTrap(const ScavTrap &Clap);
        ScavTrap& operator=(const ScavTrap &other);
        ~ScavTrap();

        void guardGate();
};
#endif
