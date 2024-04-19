/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 02:16:58 by mflury            #+#    #+#             */
/*   Updated: 2024/04/19 07:06:18 by mflury           ###   ########.fr       */
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

void PhoneBook::addContact() {
	Contact contact;
	contact = createContact();
	if (verifyContact(contact)) {
    	this->_tab[_contactCount % TAB_SIZE] = contact;
    	this->_contactCount++;
    	std::cout << "Contact added." << std::endl;
	}
}

Contact PhoneBook::createContact() {
	Contact newContact;
	std::string input;
	std::cout << "Creating a new contact..." << std::endl;
	std::cout << "Insert First Name: ";
	std::cin >> input;
	std::cout << std::endl;
	newContact.setFirstName(input);
	std::cout << "Insert Last Name: ";
	std::cin >> input;
	std::cout << std::endl;
	newContact.setLastName(input);
	std::cout << "Insert Nickname: ";
	std::cin >> input;
	std::cout << std::endl;
	newContact.setNickname(input);
	std::cout << "Insert Phone Number: ";
	std::cin >> input;
	std::cout << std::endl;
	newContact.setPhone(input);
	std::cout << "Insert Drakest Secret: ";
	std::cin >> input;
	std::cout << std::endl;
	newContact.setSecret(input);
	return newContact;
}

int PhoneBook::verifyContact(const Contact &contact) {
	std::string field;
	if (contact.getFirstName() == "" || contact.getLastName() == "" || contact.getNickname() == "" || contact.getPhone() == "" || contact.getSecret() == "")
		return 0;
	return 1;
}

void PhoneBook::searchContact() {
	std::string index;
	unsigned int i;
	this->showAllContact();
	std::cout << "choose a contact: ";
	std::cin >> index;
	std::cout << std::endl;
	std::istringstream iss(index);
    if (!(iss >> i)) {
        std::cout << "Error: Invalid input. Please enter a valid positive number." << std::endl;
        return;
    }
	this->showContact(i);
	return;
}

void PhoneBook::showAllContact() {
	std::cout << "+----------+----------+----------+----------+" << std::endl;
    std::cout << "|     Place|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < TAB_SIZE; i++) {
		if (this->_tab[i].getFirstName() == "")
			break;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		std::cout << "|" << std::right << std::setw(FIELD_SIZE) << i + 1;
		if (this->_tab[i].getFirstName().length() > FIELD_SIZE) std::cout << "|" << std::right << std::setw(FIELD_SIZE) << this->_tab[i].getFirstName().substr(0, FIELD_SIZE - 1) + ".";
		else std::cout << "|" << std::right << std::setw(FIELD_SIZE) << this->_tab[i].getFirstName();
		if (this->_tab[i].getLastName().length() > FIELD_SIZE) std::cout << "|" << std::right << std::setw(FIELD_SIZE) << this->_tab[i].getLastName().substr(0, FIELD_SIZE - 1) + ".";
		else std::cout << "|" << std::right << std::setw(FIELD_SIZE) << this->_tab[i].getLastName();
		if (this->_tab[i].getNickname().length() > FIELD_SIZE) std::cout << "|" << std::right << std::setw(FIELD_SIZE) << this->_tab[i].getNickname().substr(0, FIELD_SIZE - 1) + ".";
		else std::cout << "|" << std::right << std::setw(FIELD_SIZE) << this->_tab[i].getNickname();
		std::cout << "|" << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "Contacts shown." << std::endl;
}

void PhoneBook::showContact(const unsigned int index) {
	if (index > TAB_SIZE || index < 1)
		std::cout << "index doesnt exist." << std::endl;
	else {
		std::cout << "First Name: " << this->_tab[index - 1].getFirstName() << std::endl;
		std::cout << "Last Name: " << this->_tab[index - 1].getLastName() << std::endl;
		std::cout << "Nickname: " << this->_tab[index - 1].getNickname() << std::endl;
		std::cout << "Phone Number: " << this->_tab[index - 1].getPhone() << std::endl;
		std::cout << "Darkest Secret: " << this->_tab[index - 1].getSecret() << std::endl;
		std::cout << "Contact Shown." << std::endl;
	}
	return;
}