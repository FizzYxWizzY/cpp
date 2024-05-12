/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 02:22:38 by mflury            #+#    #+#             */
/*   Updated: 2024/05/12 04:41:49 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): _name("Unknown") {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoint = 50;
	this->FragTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name): _name(name) {
	std::cout << "DiamondTrap string constructor called" << std::endl;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoint = 50;
	this->FragTrap::_attackDamage = 30;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src): ClapTrap(src), ScavTrap(src), FragTrap(src) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->_name = src._name;
	this->ClapTrap::_name = src.ClapTrap::_name;
	this->FragTrap::_hitPoints = src.FragTrap::_hitPoints;
	this->ScavTrap::_energyPoint = src.ScavTrap::_energyPoint;
	this->FragTrap::_attackDamage = src.FragTrap::_attackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->ClapTrap::_name = rhs.ClapTrap::_name;
		this->FragTrap::_hitPoints = rhs.FragTrap::_hitPoints;
		this->ScavTrap::_energyPoint = rhs.ScavTrap::_energyPoint;
		this->FragTrap::_attackDamage = rhs.FragTrap::_attackDamage;
	}
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	return *this;
}

void DiamondTrap::attack(std::string const &target) {
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoiam() {
	std::cout << "DiamondTrap name: " << this->_name << std::endl;
	std::cout << "ClapTrap name: " << this->ClapTrap::_name << std::endl;
}

std::string &DiamondTrap::getName() {
	return this->_name;
}
