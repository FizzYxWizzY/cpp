/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 04:31:30 by mflury            #+#    #+#             */
/*   Updated: 2024/04/26 05:00:10 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) {
	this->_name = name;
	this->_weapon = weapon;
}

HumanA::~HumanA() {
}

void HumanA::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << "." << std::endl;
}