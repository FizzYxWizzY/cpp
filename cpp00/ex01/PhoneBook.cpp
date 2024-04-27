/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 02:16:58 by mflury            #+#    #+#             */
/*   Updated: 2024/04/26 23:31:32 by mflury           ###   ########.fr       */
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
	std::cout << "\033[2J\033[H";
}

Contact PhoneBook::createContact() {
	Contact newContact;
	std::string input;
	std::cout << "\033[2J\033[H";
	std::cout << "PhoneBook: Creating a new contact..." << std::endl;
	std::cout << "Insert First Name: ";
	if (!std::getline(std::cin, input)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << std::endl;
	std::cout << "\033[2J\033[H";
	newContact.setFirstName(input);
	std::cout << "PhoneBook: Creating a new contact..." << std::endl;
	std::cout << "Insert Last Name: ";
	if (!std::getline(std::cin, input)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << std::endl;
	std::cout << "\033[2J\033[H";
	newContact.setLastName(input);
	std::cout << "PhoneBook: Creating a new contact..." << std::endl;
	std::cout << "Insert Nickname: ";
	if (!std::getline(std::cin, input)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << std::endl;
	std::cout << "\033[2J\033[H";
	newContact.setNickname(input);
	std::cout << "PhoneBook: Creating a new contact..." << std::endl;
	std::cout << "Insert Phone Number: ";
	if (!std::getline(std::cin, input)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << std::endl;
	std::cout << "\033[2J\033[H";
	newContact.setPhone(input);
	std::cout << "PhoneBook: Creating a new contact..." << std::endl;
	std::cout << "Insert Drakest Secret: ";
	if (!std::getline(std::cin, input)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << std::endl;
	std::cout << "\033[2J\033[H";
	newContact.setSecret(input);
	return newContact;
}

int PhoneBook::verifyContact(const Contact &contact) {
	std::string field;
	if (contact.getFirstName() == "" || contact.getLastName() == "" || contact.getNickname() == "" || contact.getPhone() == "" || contact.getSecret() == "") {
		std::cout << "PhoneBook: Fields cant be empty, retry." << std::endl;
		return 0;
	}
	return 1;
}

void PhoneBook::searchContact() {
	std::string index;
	unsigned int i;
	std::cout << "\033[2J\033[H";
	if (this->_contactCount < 1) {
		std::cout << "PhoneBook: no contact to show." << std::endl;
		return;
	}
	std::cout << "PhoneBook: Choose a contact: (1-" << this->_contactCount << ")" << std::endl;
	this->showAllContact();
	std::cin >> index;
	std::cout << std::endl;
	std::istringstream iss(index);
    if (!(iss >> i)) {
		std::cout << "\033[2J\033[H";
        std::cout << "PhoneBook: Invalid index." << std::endl;
        return;
    }
	std::cout << "\033[2J\033[H";
	this->showContact(i);
	std::cin.get();
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
}

void PhoneBook::showContact(const unsigned int index) {
	if (index > this->_contactCount || index < 1) {
		std::cout << "PhoneBook: This index doesn't exist." << std::endl;
    	std::cin.get();
	}
	else {
		std::cout << "\033[2J\033[H";
		std::cout << "First Name: " << this->_tab[index - 1].getFirstName() << std::endl;
		std::cout << "Last Name: " << this->_tab[index - 1].getLastName() << std::endl;
		std::cout << "Nickname: " << this->_tab[index - 1].getNickname() << std::endl;
		std::cout << "Phone Number: " << this->_tab[index - 1].getPhone() << std::endl;
		std::cout << "Darkest Secret: " << this->_tab[index - 1].getSecret() << std::endl;
		std::cout << "Contact Shown." << std::endl;
		std::cout << "PhoneBook: Press Enter to continue...";
    	std::cin.get();
	}
}
