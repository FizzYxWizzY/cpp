/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:23:08 by mflury            #+#    #+#             */
/*   Updated: 2024/05/01 14:38:12 by mflury           ###   ########.fr       */
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

void Harl::debug() {
	std::cout << "\' DEBUG CALLED! \'" << std::endl;
}

void Harl::info() {
	std::cout << "\' INFO CALLED! \'" << std::endl;
}

void Harl::warning() {
	std::cout << "\' WARNING CALLED! \'" << std::endl;
}
void Harl::error() {
	std::cout << "\' ERROR CALLED! \'" << std::endl;
}

void Harl::complain(std::string level) {

}
