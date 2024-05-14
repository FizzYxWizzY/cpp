/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:32:54 by mflury            #+#    #+#             */
/*   Updated: 2024/05/14 02:32:23 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &src): Animal(src){
	*this = src;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
	if (this != &rhs) {
		// Don't forget to copy the attributes here
		this->_type = rhs._type;
	}
	std::cout << "Cat assignment operator called" << std::endl;
	return *this;
}

void Cat::makeSound() const {
	std::cout << this->_type << ": Meow motherfuckers!" << std::endl;
}
