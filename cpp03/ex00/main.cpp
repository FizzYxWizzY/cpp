/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 21:02:39 by mflury            #+#    #+#             */
/*   Updated: 2024/05/12 00:17:51 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap dude1;
	ClapTrap dude2("Bobby");

	std::cout << dude1.getName() << std::endl;
	dude1.setName("Timmy");
	std::cout << dude1.getName() << std::endl;
	std::cout << dude2.getName() << std::endl;
	for (int i = 0; i < 13;++i)
		dude1.beRepared(10);
	return 0;
}