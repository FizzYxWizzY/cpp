/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:11:51 by mflury            #+#    #+#             */
/*   Updated: 2024/05/17 04:08:37 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string const &type) : _type(type) {
	std::cout << "Parameterized constructor of Animal was call" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &src) {
	*this = src;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {
	if (this != &rhs) {
		// Don't forget to copy the attributes here
		this->_type = rhs.getType();
	}
	std::cout << "Animal assignment operator called" << std::endl;
	return *this;
}

std::string const &Animal::getType() const {
	return this->_type;
}

void Animal::makeSound() const {
	std::cout << this->getType() << ": *Some generic sound*" << std::endl;
}
