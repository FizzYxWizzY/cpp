/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:32:02 by mflury            #+#    #+#             */
/*   Updated: 2024/05/19 18:39:38 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(const Cure &src): AMateria(src) {
	this->_type = src.getType();
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &rhs) {
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	std::cout << "Cure assignment operator called" << std::endl;
	return *this;
}

AMateria *Cure::clone() const {
	AMateria *materia = new Cure();
	return materia;
}

void Cure::use(ICharacter &target) {
	std::cout << "* Heals  " << target.getName() + "'s wounds *" << std::endl;
}