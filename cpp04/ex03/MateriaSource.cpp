/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:19:12 by mflury            #+#    #+#             */
/*   Updated: 2024/05/20 12:24:53 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		this->_inventory[i] = NULL;
	}
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
	if (this != &rhs) {
		
	}
	std::cout << "MateriaSource assignment operator called" << std::endl;
	return *this;
}