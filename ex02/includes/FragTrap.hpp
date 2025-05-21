/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:55:17 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/21 18:01:43 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        FragTrap();    
        FragTrap(const std::string _name);
        FragTrap(const FragTrap &Clap);
        FragTrap& operator=(const FragTrap &other);
        ~FragTrap();

        void highFivesGuys(void);
};
#endif
