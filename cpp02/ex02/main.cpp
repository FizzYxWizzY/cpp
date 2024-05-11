/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 03:40:01 by mflury            #+#    #+#             */
/*   Updated: 2024/05/11 20:35:20 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	// std::cout << "1st part: incrementing..." << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	// std::cout << "2nd part: decrementing..." << std::endl;
	// std::cout << a << std::endl;
	// std::cout << --a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a-- << std::endl;
	// std::cout << a << std::endl;

	// std::cout << "3rd part: math..." << std::endl;
	std::cout << b << std::endl;

	// std::cout << "4th part: min/max..." << std::endl;
	// std::cout << "max:" << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	// std::cout << "min:" << std::endl;
	// std::cout << Fixed::min(a, b) << std::endl;
	return 0;
}