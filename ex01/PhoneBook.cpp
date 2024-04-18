/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 02:16:58 by mflury            #+#    #+#             */
/*   Updated: 2024/04/18 06:48:15 by mflury           ###   ########.fr       */
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
	std::cout << "+----------+----------+----------+----------+" << std::endl;
    std::cout << "|     Place|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < TAB_SIZE; i++) {
		if (this->_tab[i].getFirstName() == "")
			break;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		std::cout << "|" << std::right << std::setw(10) << i + 1;
		if (this->_tab[i].getFirstName().length() > 10) std::cout << "|" << std::right << std::setw(10) << this->_tab[i].getFirstName().substr(0, 9) + ".";
		else std::cout << "|" << std::right << std::setw(10) << this->_tab[i].getFirstName();
		if (this->_tab[i].getLastName().length() > 10) std::cout << "|" << std::right << std::setw(10) << this->_tab[i].getLastName().substr(0, 9) + ".";
		else std::cout << "|" << std::right << std::setw(10) << this->_tab[i].getLastName();
		if (this->_tab[i].getNickname().length() > 10) std::cout << "|" << std::right << std::setw(10) << this->_tab[i].getNickname().substr(0, 9) + ".";
		else std::cout << "|" << std::right << std::setw(10) << this->_tab[i].getNickname();
		std::cout << "|" << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "Contacts shown." << std::endl;
}