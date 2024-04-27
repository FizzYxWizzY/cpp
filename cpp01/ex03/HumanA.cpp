/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 04:31:30 by mflury            #+#    #+#             */
/*   Updated: 2024/04/26 23:25:12 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon) {
	this->_name = name;
}

HumanA::~HumanA() {}

void HumanA::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << "." << std::endl;
}
