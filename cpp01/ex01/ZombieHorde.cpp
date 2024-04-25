/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:50:59 by mflury            #+#    #+#             */
/*   Updated: 2024/04/25 05:36:36 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name) {
	Zombie *horde = NULL;
	if (n < 1)
		return NULL;
	horde = new Zombie[n];
	if (horde == NULL) {
		std::cout << "error while creating horde" << std::endl;
		return NULL;
	}
	for (int i = 0; i < n; i++) {
		horde[i].setName(name);
	}
	return horde;
}
