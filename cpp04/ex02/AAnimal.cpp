/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:11:51 by mflury            #+#    #+#             */
/*   Updated: 2024/05/17 08:57:55 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("AAnimal") {
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string const &type) : _type(type) {
	std::cout << "Parameterized constructor of AAnimal was call" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) {
	*this = src;
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs) {
	if (this != &rhs) {
		// Don't forget to copy the attributes here
		this->_type = rhs.getType();
	}
	std::cout << "AAnimal assignment operator called" << std::endl;
	return *this;
}

// std::string const &AAnimal::getType() const {
// 	return this->_type;
// }

// void AAnimal::makeSound() const {
// 	std::cout << this->getType() << ": *Some generic sound*" << std::endl;
// }
