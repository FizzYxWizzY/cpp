/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:29:43 by mflury            #+#    #+#             */
/*   Updated: 2024/11/12 19:19:24 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45, "Undefined") {
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45, target) {
	std::cout << "RobotomyRequestForm 'target' constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm("RobotomyRequestForm", 72, 45, src.getTarget()) {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	std::cout << "RobotomyRequestForm assignment operator called" << std::endl;
	if (this != &rhs) {
		this->setTarget(rhs.getTarget());
	}
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const {
	if (bureaucrat.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	if (!this->getSignature())
		throw NotSignedException();
	else {
		std::cout << "*Drilling noises...*" << std::endl;
		std::srand(std::time(0));
		if (std::rand() % 2)
			std::cout << this->getTarget() << " successfully got robotomized!" << std::endl;
		else
			std::cout << this->getTarget() << " unsuccessfully got robotomized..." << std::endl;
	}
}

