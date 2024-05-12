/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 21:03:46 by mflury            #+#    #+#             */
/*   Updated: 2024/05/12 01:10:17 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
	_name("Unknown"),
	_hitPoints(10),
	_energyPoint(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):
	_name(name),
	_hitPoints(10),
	_energyPoint(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap string constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	*this = src;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoint = rhs._energyPoint;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout << "ClapTrap assignment operator called" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if (this->_energyPoint < 1 || this->_hitPoints < 1) {
		std::cout << "ClapTrap " << this->_name;
		std::cout << " can't do that." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name;
	std::cout << " attacks " << target << ", ";
	std::cout << "causing " << this->_attackDamage;
	std::cout << " points of damage!" << std::endl;
	--this->_energyPoint;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints < 1) {
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name;
	std::cout << " takes " << amount;
	std::cout << " points of damage";
	this->_hitPoints -= amount;
	if (this->_hitPoints < 1)
		std::cout << " and dies";
	std::cout << "!" << std::endl;
}

void ClapTrap::beRepared(unsigned int amount) {
	if (this->_energyPoint < 1 || this->_hitPoints < 1) {
		std::cout << "ClapTrap " << this->_name;
		std::cout << " can't do that!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name;
	std::cout << " heals for " << amount;
	std::cout << " hit points!" << std::endl;
	this->_hitPoints += amount;
	--this->_energyPoint;
}

void ClapTrap::setName(std::string name) {
	this->_name = name;
}

std::string &ClapTrap::getName() {
	return this->_name;
}