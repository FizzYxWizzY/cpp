/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 04:22:22 by mflury            #+#    #+#             */
/*   Updated: 2024/11/10 03:43:21 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
# define Form_HPP

#include <iostream>
#include "Bureaucrat.hpp"

# ifndef MAX_GRADE
# define MAX_GRADE 1
# endif
# ifndef MIN_GRADE
# define MIN_GRADE 150
# endif

class Bureaucrat;

class Form {
	private:
		const std::string			_name;
		bool						_signature;
		const unsigned int			_signGrade;
		const unsigned int			_execGrade;

		void verifyGrades();
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		
	public:
		Form();
		Form(const std::string &name);
		Form(const std::string &name, unsigned int signGrade, unsigned int ExecGrade);

		~Form();
		Form(const Form &src);
		Form &operator=(const Form &rhs);

		const std::string	&getName() const;
		const unsigned int	&getSignGrade() const;
		const unsigned int	&getExecGrade() const;
		bool				getSignature() const;

		void beSigned(const Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &os, const Form &ref);

#endif

// Now that you have bureaucrats, let’s give them something to do. What better activity
// could there be than the one of filling out a stack of forms?

// Then, let’s make a Form class. It has:
//		•A constant name.
//		•A boolean indicating whether it is signed (at construction, it’s not).
//		•A constant grade required to sign it.
//		•And a constant grade required to execute it.

// All these attributes are private, not protected.

// The grades of the Form follow the same rules that apply to the Bureaucrat. Thus,
// the following exceptions will be thrown if a form grade is out of bounds:
//		Form::GradeTooHighException and Form::GradeTooLowException.

// Same as before, write getters for all attributes and an overload of the insertion («)

// operator that prints all the form’s informations.

// Add also a beSigned() member function to the Form that takes a Bureaucrat as
// parameter. It changes the form status to signed if the bureaucrat’s grade is high enough
// (higher or egal to the required one). Remember, grade 1 is higher than grade 2.

// If the grade is too low, throw a Form::GradeTooLowException.



// Lastly, add a signForm() member function to the Bureaucrat. If the form got signed,
// it will print something like:
//		<bureaucrat> signed <form>
// Otherwise, it will print something like:
// 		<bureaucrat> couldn’t sign <form> because <reason>.

// Implement and turn in some tests to ensure everything works as expected.







