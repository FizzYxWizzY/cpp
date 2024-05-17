/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:35:49 by mflury            #+#    #+#             */
/*   Updated: 2024/05/17 11:47:06 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(const Ice &src): AMateria(src) {
	this->_type = src.getType();
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &rhs) {
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	std::cout << "Ice assignment operator called" << std::endl;
	return *this;
}

AMateria *Ice::clone() const {
	AMateria *materia = new Ice();
	return materia;
}
