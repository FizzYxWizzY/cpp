/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:55:22 by mflury            #+#    #+#             */
/*   Updated: 2024/11/23 18:54:57 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5, "Undefined") {
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5, target) {
	std::cout << "PresidentialPardonForm 'target' constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm("PresidentialPardonForm", 25, 5, src.getTarget()) {
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	std::cout << "PresidentialPardonForm assignment operator called" << std::endl;
	if (this != &rhs) {
		this->setTarget(rhs.getTarget());
	}
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const {
	if (bureaucrat.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	if (!this->getSignature())
		throw NotSignedException();
	else {
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}

AForm *PresidentialPardonForm::createForm(const std::string &target) {
    		return new PresidentialPardonForm(target);
}
