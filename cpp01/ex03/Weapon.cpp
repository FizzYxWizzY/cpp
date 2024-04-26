/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:31:27 by mflury            #+#    #+#             */
/*   Updated: 2024/04/26 05:03:52 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {

}

Weapon::Weapon(std::string type) {
	std::cout << "Weapon default constructor called" << std::endl;
	this->setType(type);
}

Weapon::~Weapon() {
	std::cout << "Weapon destructor called" << std::endl;
}

void Weapon::setType(const std::string type) {
	this->_type = type;
}

std::string const &Weapon::getType() const {
	return this->_type;
}
