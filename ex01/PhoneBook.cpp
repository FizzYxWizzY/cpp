/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 02:16:58 by mflury            #+#    #+#             */
/*   Updated: 2024/04/16 06:36:14 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// Constructor definition
PhoneBook::PhoneBook() {
	// Constructor code here
}

// Destructor definition
PhoneBook::~PhoneBook() {
    // Destructor code here
}
// member functions definition

void PhoneBook::addContact(const Contact &newContact) {   
	if (this->_tab[_contactCount % TAB_SIZE]) {
		this->_tab[_contactCount % TAB_SIZE] = nullptr;
	}     
    this->_tab[_contactCount % TAB_SIZE] = newContact;
    this->_contactCount++;
    std::cout << "Contact added." << std::endl;
}