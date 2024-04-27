/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:23:03 by mflury            #+#    #+#             */
/*   Updated: 2024/04/26 23:01:08 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	std::cout << "Creating a Zombie on the stack..." << std::endl;
	randomChump("Tania");
	
	std::cout << "Creating a Zombie on the heap..." << std::endl;
	Zombie *someone = newZombie("Benjamin");
	
	std::cout << "Using allocated zombie in main..." << std::endl;
	someone->announce();
	
	std::cout << "Deleting allocated zombie..." << std::endl;
	delete someone;
	return 0;
}
