/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:46:54 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/21 18:19:07 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main( void ) {
	ClapTrap Clap("Crazy");

	Clap.attack("Not that crazy");
	Clap.takeDamage(5);
	Clap.beRepaired(10);
	for (int i = 0 ; i < 12; i++)
		Clap.attack("another crazy");
	
}
