/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:57:20 by mflury            #+#    #+#             */
/*   Updated: 2024/11/04 03:59:41 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	std::string name = "John";
	Bureaucrat john(name, 42);
	std::cout << john << std::endl;
	try {
		john.setGrade(150);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << john << std::endl;
	try {
		john.demote();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << john << std::endl;

	try {
		john.setGrade(1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << john << std::endl;
	try {
		john.promote();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << john << std::endl;
	
	return 0;
}