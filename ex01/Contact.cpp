/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 02:18:09 by mflury            #+#    #+#             */
/*   Updated: 2024/04/15 16:22:47 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Implementation file (ClassName.cpp)
#include "Contact.hpp"

// Constructor definition
Contact::Contact(
	const std::string &firstName,
	const std::string &lastName,
	const std::string &nickname,
	const std::string &phone,
	const std::string &secret
) {
    // Constructor code here
	setFirstName(firstName);
	setLastName(lastName);
	setNickname(nickname);
	setPhone(phone);
	setSecret(secret);
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
void Contact::setFirstName(std::string firstName) {
    this->_firstName = firstName;
}

std::string Contact::getFirstName() const {
    return this->_firstName;
}

void Contact::setLastName(std::string lastName) {
    this->_lastName = lastName;
}

std::string Contact::getLastName() const {
    return this->_lastName;
}

void Contact::setNickname(std::string nickname) {
    this->_nickname = nickname;
}

std::string Contact::getNickname() const {
    return this->_nickname;
}

void Contact::setPhone(std::string phone) {
    this->_phone = phone;
}

std::string Contact::getPhone() const {
    return this->_phone;
}

void Contact::setSecret(std::string secret) {
    this->_secret = secret;
}

std::string Contact::getSecret() const {
    return this->_secret;
}