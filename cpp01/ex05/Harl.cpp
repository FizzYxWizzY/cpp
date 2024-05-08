/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:23:08 by mflury            #+#    #+#             */
/*   Updated: 2024/05/02 08:20:35 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl default constructor called" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl destructor called" << std::endl;
}

Harl::Harl(const Harl& src)
{
	*this = src;
	std::cout << "Harl copy constructor called" << std::endl;
}

Harl& Harl::operator=(const Harl& rhs)
{
	if (this != &rhs)
	{
		//Don't forget to copy the attributes here
	}
	std::cout << "Harl assignment operator called" << std::endl;
	return *this;
}

void Harl::debug() const {
	std::cout << "Harl: \' DEBUG CALLED! \'" << std::endl;
}

void Harl::info() const {
	std::cout << "Harl: \' INFO CALLED! \'" << std::endl;
}

void Harl::warning() const {
	std::cout << "Harl: \' WARNING CALLED! \'" << std::endl;
}
void Harl::error() const {
	std::cout << "Harl: \' ERROR CALLED! \'" << std::endl;
}

void Harl::complain(std::string level) const {
	typedef void (Harl::*fptr)() const;
	fptr f[] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++) {
		if (level == levels[i])
			(this->*f[i])();
	}
}
