/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 04:22:46 by mflury            #+#    #+#             */
/*   Updated: 2024/11/10 02:39:54 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// const std::string	_name;
// 		const int			_signGrade;
// 		const int			_execGrade;
// 		bool				_isSigned;

Form::Form() : _name("Undefined"), _signature(0) , _signGrade(MIN_GRADE), _execGrade(MIN_GRADE) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string &name) : _name(name), _signature(0) , _signGrade(MIN_GRADE), _execGrade(MIN_GRADE) {
	std::cout << "Form 'name' constructor called" << std::endl;
}

Form::Form(const std::string &name, unsigned int signGrade, unsigned int execGrade) : _name(name), _signature(0) , _signGrade(signGrade), _execGrade(execGrade) {
	std::cout << "Form 'name & grades' constructor called" << std::endl;
	verifyGrades();
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

Form::Form(const Form &src) : _name(src.getName()), _signature(src.getSignature()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade()) {
	std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &rhs) {
	std::cout << "Form assignment operator called" << std::endl;
	if (this != &rhs)
		this->_signature = rhs.getSignature();
	return *this;
}

const std::string &Form::getName() const {
	return _name;
}

const unsigned int	&Form::getSignGrade() const {
	return _signGrade;
}

const unsigned int	&Form::getExecGrade() const {
	return _execGrade;
}

bool Form::getSignature() const {
	return _signature;
}

void Form::verifyGrades() {
	if (_signGrade > MIN_GRADE || _execGrade > MIN_GRADE)
		throw GradeTooLowException();
	if (_signGrade < MAX_GRADE || _execGrade < MAX_GRADE)
		throw GradeTooHighException();
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	else
		this->_signature = 1;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Form: Grade too high.";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Form: Grade too low.";
}

std::ostream &operator<<(std::ostream &os, const Form &ref) {
	std::cout << ref.getName() << " form, Signature Grade is " << ref.getSignGrade() << ", Execution Grade is " << ref.getExecGrade();
	if (ref.getSignature())
		std::cout << " and is signed." << std::endl;
	else
		std::cout << " and is not signed." << std::endl;
	return os;
}
