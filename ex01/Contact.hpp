/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 02:18:06 by mflury            #+#    #+#             */
/*   Updated: 2024/04/15 07:12:57 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
private:
    // Private member variables
    std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phone;

public:
    // Constructor
    Contact(
		const std::string &firstName = "",
		const std::string &lastName = "",
		const std::string &nickname = "",
		const std::string &phone = ""
	);

    // Destructor
    ~Contact();

    // Member function declarations
    // void memberFunction1();
    // void memberFunction2(int parameter);
    
    // Getter and setter for private variable
    void setFirstName(std::string firstName);
    std::string getFirstName() const;
	void setLastName(std::string lastName);
    std::string getLastName() const;
	void setNickname(std::string nickname);
    std::string getNickname() const;
	void setPhone(std::string phone);
    std::string getPhone() const;
};

#endif
