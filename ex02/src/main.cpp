/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:46:54 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/21 18:08:28 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

int main(void) {
	FragTrap Fragy("Happy");

	Fragy.attack("Sad");
	Fragy.takeDamage(5);
	Fragy.beRepaired(10);
	Fragy.highFivesGuys();
	Fragy.takeDamage(110);
	
}
