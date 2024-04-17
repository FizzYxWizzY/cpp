/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 02:16:58 by mflury            #+#    #+#             */
/*   Updated: 2024/04/17 14:54:08 by mflury           ###   ########.fr       */
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
    this->_tab[_contactCount % TAB_SIZE] = newContact;
    this->_contactCount++;
    std::cout << "Contact added." << std::endl;
}

void PhoneBook::showAllContact() {   
	for (int i = 0; i < TAB_SIZE; i++) {
		if (this->_tab[i].getFirstName() == "")
			return;
		std::cout << this->_tab[i].getFirstName() << std::endl;
		
	}
}