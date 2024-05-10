/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:15:56 by mflury            #+#    #+#             */
/*   Updated: 2024/05/10 10:30:37 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _nbr(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value) {
	std::cout << "int Constructor called" << std::endl;
	this->_nbr = (value << this->_precision);
}

Fixed::Fixed(float const value) {
	std::cout << "Float constructor called" << std::endl;
	this->_nbr = roundf(value * 256);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_nbr = rhs.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits() const {
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_nbr;
}

void Fixed::setRawBits(int raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	this->_nbr = raw;
}

int Fixed::toInt() const {
	// std::cout << "toInt member function called" << std::endl;
	return (this->_nbr >> this->_precision);
}

float Fixed::toFloat() const {
	// std::cout << "toFloat member function called" << std::endl;
	return float(this->_nbr) / 256;
}

std::ostream &operator<<(std::ostream &o, const Fixed &rhs) {
	o << rhs.toFloat();
	return o;
}