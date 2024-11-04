/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:57:05 by mflury            #+#    #+#             */
/*   Updated: 2024/11/04 04:06:04 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Undefined"), _grade(MIN_GRADE) {
	std::cout << "Bureaucrat default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string &name) : _name(name), _grade(MIN_GRADE) {
	std::cout << "Bureaucrat 'name' constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(int grade) : _name("Undefined") {
	std::cout << "Bureaucrat 'grade' constructor called." << std::endl;
	setGrade(grade);
}

Bureaucrat::Bureaucrat(std::string &name, int grade) : _name(name) {
	std::cout << "Bureaucrat 'name & grade' constructor called." << std::endl;
	setGrade(grade);
}


Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName()), _grade(src.getGrade()) {
	std::cout << "Bureaucrat copy constructor called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	std::cout << "Bureaucrat assignment operator called." << std::endl;
	if (this != &rhs) {
		this->setGrade(rhs.getGrade());
		// this->_name = rhs.getName();
	}
	return *this;
}


void Bureaucrat::setGrade(int grade) {
	if (grade < MAX_GRADE)
		throw GradeTooHighException();
	else if (grade > MIN_GRADE)
		throw GradeTooLowException();
	else
		this->_grade = grade;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

const std::string &Bureaucrat::getName() const {
	return this->_name;
}

void	Bureaucrat::promote() {
	this->setGrade(this->getGrade() - 1);
}

void	Bureaucrat::demote() {
	this->setGrade(this->getGrade() + 1);
}


const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade cannot be higher than 1.";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade cannot be lower than 150.";
}


std::ostream &operator<<(std::ostream &os, const Bureaucrat &ref) {
	std::cout << ref.getName() << ", bureaucrat grade " << ref.getGrade() << "." << std::endl;
	return os;
}
