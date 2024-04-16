/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 02:18:01 by mflury            #+#    #+#             */
/*   Updated: 2024/04/16 06:02:36 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

#define TAB_SIZE = 8

class PhoneBook {
private:
    // Private member variables
    Contact _tab[TAB_SIZE];
	unsigned int _contactCount;
public:
	PhoneBook();

    // Constructor
    // PhoneBook() {
	// 	for (int i = 0; i < TAB_SIZE; i++) {
	// 		_tab[i] = Contact();
	// 	}
	// };
    
    // Destructor
    ~PhoneBook();

    // Member function declarations
	void addContact(const Contact &newContact);
    // void addContact();
    // void searchContact();
	// void searchContact();
    
    // Getter and setter for private variable
    
};

#endif
