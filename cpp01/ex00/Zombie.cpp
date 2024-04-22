/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:22:49 by mflury            #+#    #+#             */
/*   Updated: 2024/04/22 12:07:28 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string name) {
	setName(name);
	announce();
}

Zombie::~Zombie()
{
	std::cout << this->_name << ": Dies, again..." << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	if (name == "") {
		std::cout << "Error. Zombie need a name." << std::endl;
		return;
	}
    this->_name = name;
}

// Zombie::Zombie(const Zombie &src)
// {
// 	*this = src;
// 	std::cout << "Zombie copy constructor called" << std::endl;
// }

// Zombie &Zombie::operator=(const Zombie &rhs)
// {
// 	if (this != &rhs)
// 	{
// 		//Don't forget to copy the attributes here
// 	}
// 	std::cout << "Zombie assignment operator called" << std::endl;
// 	return *this;
// }