/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 01:55:28 by mflury            #+#    #+#             */
/*   Updated: 2024/05/12 02:09:53 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	std::cout << "FragTrap string constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src): ClapTrap(src) {
	*this = src;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoint = rhs._energyPoint;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout << "FragTrap assignment operator called" << std::endl;
	return *this;
}

void FragTrap::highFiveGuys() {
	if (this->_hitPoints < 1) {
		std::cout << "FragTrap " << this->_name;
		std::cout << " can't do that!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name;
	std::cout << " asks for a high five." << std::endl;
}
