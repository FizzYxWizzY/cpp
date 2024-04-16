/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 02:16:58 by mflury            #+#    #+#             */
/*   Updated: 2024/04/16 06:20:00 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// Constructor definition






// member functions definition

void PhoneBook::addContact(const Contact &newContact) {   
	if (this->_tab[_contactCount % TAB_SIZE]) {
		this->_tab[_contactCount % TAB_SIZE] = nullptr;
	}     
    this->_tab[_contactCount % TAB_SIZE] = newContact;
    this->_contactCount++;
    std::cout << "Contact added." << std::endl;
}