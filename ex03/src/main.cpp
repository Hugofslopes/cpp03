/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:46:54 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/21 17:44:37 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

int main(void) {
	DiamondTrap Di("Guy");
	
	Di.attack("John Doe");
	Di.whoAmI();
	Di.highFivesGuys();
	Di.takeDamage(99);
	Di.takeDamage(1);
	Di.beRepaired(1);

	DiamondTrap Di2 = Di;
	Di.whoAmI();
	Di.beRepaired(1);
	Di.attack("John Doe");
	Di.takeDamage(99);
}
