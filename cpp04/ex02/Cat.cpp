/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:32:54 by mflury            #+#    #+#             */
/*   Updated: 2024/05/17 10:17:42 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal() {
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;	
}

Cat::Cat(const Cat &src): AAnimal(src._type){
	std::cout << "Cat copy constructor called" << std::endl;
	delete this->brain;
	this->brain = new Brain(*(src.brain));
}

Cat &Cat::operator=(const Cat &rhs) {
	if (this != &rhs) {
		this->_type = rhs._type;
		delete this->brain;
		this->brain = new Brain(*rhs.brain);
	}
	std::cout << "Cat assignment operator called" << std::endl;
	return *this;
}

std::string const &Cat::getType() const {
	return this->_type;
}

void Cat::makeSound() const {
	std::cout << this->_type << ": Meow motherfuckers!" << std::endl;
}
