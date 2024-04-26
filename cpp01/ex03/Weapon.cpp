/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:31:27 by mflury            #+#    #+#             */
/*   Updated: 2024/04/26 05:14:20 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::Weapon(std::string type) {
	this->setType(type);
}

Weapon::~Weapon() {
}

void Weapon::setType(const std::string type) {
	this->_type = type;
}

std::string const &Weapon::getType() const {
	return this->_type;
}
