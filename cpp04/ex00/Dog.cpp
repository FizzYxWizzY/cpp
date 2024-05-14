/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:35:48 by mflury            #+#    #+#             */
/*   Updated: 2024/05/14 02:31:52 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &src): Animal(src) {
	*this = src;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
	if (this != &rhs) {
		// Don't forget to copy the attributes here
		this->_type = rhs._type;
	}
	std::cout << "Dog assignment operator called" << std::endl;
	return *this;
}

void Dog::makeSound() const {
	std::cout << this->_type << ": Woof motherfuckers!" << std::endl;
}