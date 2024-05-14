/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:35:48 by mflury            #+#    #+#             */
/*   Updated: 2024/05/14 03:31:29 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() {
	std::cout << "WrongDog default constructor called" << std::endl;
	this->_type = "WrongDog";
}

WrongDog::~WrongDog() {
	std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &src): WrongAnimal(src) {
	*this = src;
	std::cout << "WrongDog copy constructor called" << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &rhs) {
	if (this != &rhs) {
		// Don't forget to copy the attributes here
		this->_type = rhs._type;
	}
	std::cout << "WrongDog assignment operator called" << std::endl;
	return *this;
}

void WrongDog::makeSound() const {
	std::cout << this->_type << ": Woof motherfuckers!" << std::endl;
}