/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:46:54 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/21 18:13:21 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main( void ) {
	ScavTrap Scav("Bob");

	Scav.attack("Frank");
	Scav.takeDamage(5);
	Scav.beRepaired(10);
	Scav.guardGate();
	for (int i = 0 ; i < 48; i++)
		Scav.attack("Frank");
	Scav.beRepaired(10);
}
