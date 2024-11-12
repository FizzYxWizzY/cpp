/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 04:22:46 by mflury            #+#    #+#             */
/*   Updated: 2024/11/12 02:20:32 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Undefined"), _target("Undefined"), _signature(0) , _signGrade(MIN_GRADE), _execGrade(MIN_GRADE) {
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const std::string &name) : _name(name), _target("Undefined"), _signature(0) , _signGrade(MIN_GRADE), _execGrade(MIN_GRADE) {
	std::cout << "AForm 'name' constructor called" << std::endl;
}

AForm::AForm(const std::string &name, unsigned int signGrade, unsigned int execGrade) : _name(name), _target("Undefined"), _signature(0) , _signGrade(signGrade), _execGrade(execGrade) {
	std::cout << "AForm 'name & grades' constructor called" << std::endl;
	verifyGrades();
}

AForm::AForm(const std::string &name, unsigned int signGrade, unsigned int execGrade, const std::string &target) : _name(name), _target(target), _signature(0) , _signGrade(signGrade), _execGrade(execGrade) {
	std::cout << "AForm 'name, grades, target' constructor called" << std::endl;
	verifyGrades();
}

AForm::~AForm() {
	std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(const AForm &src) : _name(src.getName()), _target(src.getTarget()), _signature(src.getSignature()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade()) {
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &rhs) {
	std::cout << "AForm assignment operator called" << std::endl;
	if (this != &rhs)
		this->_signature = rhs.getSignature();
	return *this;
}

const std::string &AForm::getName() const {
	return _name;
}

const std::string &AForm::getTarget() const {
	return _target;
}

const unsigned int	&AForm::getSignGrade() const {
	return _signGrade;
}

const unsigned int	&AForm::getExecGrade() const {
	return _execGrade;
}

bool AForm::getSignature() const {
	return _signature;
}

void AForm::verifyGrades() {
	if (_signGrade > MIN_GRADE || _execGrade > MIN_GRADE)
		throw GradeTooLowException();
	if (_signGrade < MAX_GRADE || _execGrade < MAX_GRADE)
		throw GradeTooHighException();
}

void AForm::setTarget(const std::string &target) {
	_target = target;
}

void AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	else
		this->_signature = 1;
}

const char *AForm::GradeTooHighException::what() const throw() {
	return "Form: Grade too high.";
}

const char *AForm::GradeTooLowException::what() const throw() {
	return "Form: Grade too low.";
}

const char *AForm::NotSignedException::what() const throw() {
	return "Form: Not signed.";
}

std::ostream &operator<<(std::ostream &os, const AForm &ref) {
	std::cout << ref.getName() << " form, Signature Grade is " << ref.getSignGrade();
	std::cout << ", Execution Grade is " << ref.getExecGrade() << ", Target is " << ref.getTarget();
	if (ref.getSignature())
		std::cout << " and is signed." << std::endl;
	else
		std::cout << " and is not signed." << std::endl;
	return os;
}
