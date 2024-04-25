/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 02:18:01 by mflury            #+#    #+#             */
/*   Updated: 2024/04/24 07:51:37 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"

#define TAB_SIZE 8
#define FIELD_SIZE 10

class PhoneBook {
private:
    // Private member variables
    Contact _tab[TAB_SIZE];
	unsigned int _contactCount;
public:
	PhoneBook();
    ~PhoneBook();

    // Member function declarations
	void addContact();
    Contact createContact();
    int verifyContact(const Contact &contact);
    void showAllContact();
    void showContact(const unsigned int index);
    void searchContact();
    // void searchContact();

    
    // Getter and setter for private variable
    
};

#endif
