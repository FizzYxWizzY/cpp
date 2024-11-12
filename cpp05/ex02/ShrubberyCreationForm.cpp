/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:12:24 by mflury            #+#    #+#             */
/*   Updated: 2024/11/12 15:55:58 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137, "Undefined") {
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137, target) {
	std::cout << "ShrubberyCreationForm 'target' constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm("ShrubberyCreationForm", 145, 137, src.getTarget()) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	std::cout << "ShrubberyCreationForm assignment operator called" << std::endl;
	if (this != &rhs) {
		this->setTarget(rhs.getTarget());
	}
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const {
	if (bureaucrat.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	if (!this->getSignature())
		throw NotSignedException();
	else {
		std::ofstream file((this->getTarget() + "_shrubbery").c_str());
		if (!file)
			throw std::runtime_error("Cannot open file");
		else {
			file << "       ccee88oo\n"
            << "  C8O8O8Q8PoOb o8oo\n"
            << " dOB69QO8PdUOpugoO9bD\n"
            << "CgggbU8OU qOp qOdoUOdcb\n"
            << "     6OuU  /p u gcoUodpP\n"
            << "        \\\\//  /douUP\n"
            << "          \\\\////\n"
            << "           |||/\\\n"
            << "           |||\\/\n"
            << "           |||||\n"
            << "     .....//||||\\....\n";
			file.close();
		}
	}
}
