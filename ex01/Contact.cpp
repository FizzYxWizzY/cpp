/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 02:18:09 by mflury            #+#    #+#             */
/*   Updated: 2024/04/15 05:20:33 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Implementation file (ClassName.cpp)
#include "Contact.hpp"

// Constructor definition
Contact::Contact(
	const std::string &firstName,
	const std::string &lastName
) {
    // Constructor code here
	setFirstName(firstName);
	setLastName(lastName);
}

// Destructor definition
Contact::~Contact() {
    // Destructor code here
}

// // Member function definition
// void Contact::memberFunction1() {
//     // Function code here
// }

// void Contact::memberFunction2(int parameter) {
//     // Function code here
// }

// Setters & Getters definition for private variables
std::string Contact::getFirstName() const {
    return this->_firstName;
}

void Contact::setFirstName(std::string firstName) {
    this->_firstName = firstName;
}

std::string Contact::getLastName() const {
    return this->_lastName;
}

void Contact::setLastName(std::string lastName) {
    this->_lastName = lastName;
}