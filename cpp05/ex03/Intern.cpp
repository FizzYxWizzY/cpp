/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:22:11 by mflury            #+#    #+#             */
/*   Updated: 2024/11/23 20:47:22 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(const Intern &src) {
	std::cout << "Intern copy constructor called" << std::endl;
	(void)src;
}

Intern &Intern::operator=(const Intern &rhs) {
	std::cout << "Intern assignment operator called" << std::endl;
	(void)rhs;
	return *this;
}

const char *Intern::NonexistentFormException::what() const throw() {
	return "Intern: Form does not exist.";
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target) const {
	std::string names[3] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	FunctionPointer functionList[3] = {
		&PresidentialPardonForm::createForm,
		&RobotomyRequestForm::createForm,
		&ShrubberyCreationForm::createForm
	};
	int i = 0;
	while (i < 3) {
		if (formName == names[i]){
			AForm *form = functionList[i](target);
			std::cout << "Intern created " << form->getName() << "." << std::endl;
			return form;
		}
		++i;
	}
	throw NonexistentFormException();
}
