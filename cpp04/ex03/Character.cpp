/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 00:10:23 by mflury            #+#    #+#             */
/*   Updated: 2024/05/19 18:33:18 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("NoName") {
	for (int i = 0; i < 4; ++i) {
		this->_inventory[i] = NULL;
	}
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string &name): _name(name) {
	for (int i = 0; i < 4; ++i) {
		this->_inventory[i] = NULL;
	}
	std::cout << "Character default constructor called" << std::endl;
}

Character::~Character() {
	for (int i = 0; i < 4; ++i) {
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	std::cout << "Character destructor called" << std::endl;
}

Character::Character(const Character &src): _name(src.getName()) {
	for (int i = 0; i < 4; ++i) {
		if (src._inventory[i] != NULL) {
			this->_inventory[i] = src._inventory[i]->clone();
		} else {
			this->_inventory[i] = NULL;
		}
	}
	std::cout << "Character copy constructor called" << std::endl;
}

Character &Character::operator=(const Character &rhs) {
	if (this != &rhs) {
		for (int i = 0; i < 4; ++i) {
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (rhs._inventory[i] == NULL)
				this->_inventory[i] = NULL;
			else
				this->_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	std::cout << "Character assignment operator called" << std::endl;
	return *this;
}

std::string const &Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL) {
		this->_inventory[idx]->use(target);
	} else {
		std::cout << this->getName() << " cannot do that..." << std::endl;
	}
}