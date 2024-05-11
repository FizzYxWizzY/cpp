/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 21:02:39 by mflury            #+#    #+#             */
/*   Updated: 2024/05/12 01:50:53 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ScavTrap dude("Alain");
	std::cout << dude.getName() << std::endl; 
	dude.guardGate();



	// ClapTrap dude1;
	// ClapTrap dude2("Bobby");

	// std::cout << dude1.getName() << std::endl;
	// dude1.setName("Timmy");
	// std::cout << dude1.getName() << std::endl;
	// std::cout << dude2.getName() << std::endl;
	// for (int i = 0; i < 13;++i)
	// 	dude1.beRepared(10);
	return 0;
}