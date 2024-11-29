/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:40:42 by mflury            #+#    #+#             */
/*   Updated: 2024/11/29 02:53:05 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

MutantStack::MutantStack() {
	std::cout << "MutantStack default constructor called" << std::endl;
}

MutantStack::~MutantStack() {
	std::cout << "MutantStack destructor called" << std::endl;
}

MutantStack::MutantStack(const MutantStack &src) {
	*this = src;
	std::cout << "MutantStack copy constructor called" << std::endl;
}

MutantStack &MutantStack::operator=(const MutantStack &rhs) {
	if (this != &rhs) {
		// Don't forget to copy the attributes here
	}
	std::cout << "MutantStack assignment operator called" << std::endl;
	return *this;
}