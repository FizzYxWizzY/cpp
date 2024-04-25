/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:23:03 by mflury            #+#    #+#             */
/*   Updated: 2024/04/25 05:25:18 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	if (HORDE_SIZE < 1)
		return 0;
	std::cout << "Creating a Zombiehorde..." << std::endl;
	Zombie *horde = NULL;
	horde = zombieHorde(HORDE_SIZE, NAME);
	if (horde == NULL)
		return 1;
	 for (int i = 0; i < HORDE_SIZE; i++) {
		horde[i].announce();
	}
	if (horde) {
		std::cout << "Deleting the Zombiehorde..." << std::endl;
		delete[] horde;
	}
	return 0;
}
