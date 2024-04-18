/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 02:18:01 by mflury            #+#    #+#             */
/*   Updated: 2024/04/18 05:36:36 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

#define TAB_SIZE 8

class PhoneBook {
private:
    // Private member variables
    Contact _tab[TAB_SIZE];
	unsigned int _contactCount;
public:
	PhoneBook();
    ~PhoneBook();

    // Member function declarations
	void addContact(const Contact &newContact);
    void showAllContact();    
    // void searchContact();

    
    // Getter and setter for private variable
    
};

#endif
