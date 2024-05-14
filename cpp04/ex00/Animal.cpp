/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:11:51 by mflury            #+#    #+#             */
/*   Updated: 2024/05/14 02:46:31 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
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
		this->_type = rhs._type;
	}
	std::cout << "Animal assignment operator called" << std::endl;
	return *this;
}

void Animal::makeSound() const {
	std::cout << this->_type << ": *Some generic sound*" << std::endl;
}
