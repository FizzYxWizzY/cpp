/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:57:20 by mflury            #+#    #+#             */
/*   Updated: 2024/11/24 03:04:06 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
	std::cout << "\nCreating Bureaucrat...\n" << std::endl;
	Bureaucrat john("Hermes", 1);
	Intern randy;
	std::cout << "\nTesting intern's Robotomy request form...\n" << std::endl;
	try {
		AForm &form = *randy.makeForm("robotomy request", "Bender");
		john.signForm(form);
		john.executeForm(form);
		delete &form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\nTesting intern's presidential pardon form...\n" << std::endl;
	try {
		AForm &form = *randy.makeForm("presidential pardon", "Fry");
		john.signForm(form);
		john.executeForm(form);
		delete &form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\nTesting intern's Shrubbery form...\n" << std::endl;
	try {
		AForm &form = *randy.makeForm("shrubbery creation", "Zoidberg");
		john.signForm(form);
		john.executeForm(form);
		delete &form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\nTesting intern's invalid form...\n" << std::endl;
	try {
		AForm &form = *randy.makeForm("something that does not exist", "Scruffy");
		john.signForm(form);
		john.executeForm(form);
		delete &form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}

