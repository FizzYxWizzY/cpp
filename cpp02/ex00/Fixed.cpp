/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:15:56 by mflury            #+#    #+#             */
/*   Updated: 2024/05/08 14:29:09 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _nbr(0) {
	std::cout << "Fixed default constructor called" << std::endl;
}

Fixed::Fixed(int value): _nbr(value) {
	std::cout << "Fixed default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Fixed destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Fixed copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << "Fixed assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_nbr = rhs.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_nbr;
}