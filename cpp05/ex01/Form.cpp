/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 04:22:46 by mflury            #+#    #+#             */
/*   Updated: 2024/11/04 04:23:08 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() {
	std::cout << "Form default constructor called" << std::endl;
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

Form::Form(const Form &src) {
	*this = src;
	std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &rhs) {
	if (this != &rhs) {
		// Don't forget to copy the attributes here
	}
	std::cout << "Form assignment operator called" << std::endl;
	return *this;
}