/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:57:20 by mflury            #+#    #+#             */
/*   Updated: 2024/11/23 22:01:23 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
	Bureaucrat john("John", 1);
	Intern randy;
	try {
		AForm *form = randy.makeForm("robotomy request", "Bender");
		john.signForm(*form);
		john.executeForm(*form);
		delete form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}

