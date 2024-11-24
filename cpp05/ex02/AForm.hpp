/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 04:22:22 by mflury            #+#    #+#             */
/*   Updated: 2024/11/24 03:31:30 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

# ifndef MAX_GRADE
# define MAX_GRADE 1
# endif
# ifndef MIN_GRADE
# define MIN_GRADE 150
# endif

class Bureaucrat;
 
class AForm {
	private:
		const std::string	_name;
		std::string			_target;
		bool				_signature;
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;

		void verifyGrades();
		
	public:
		AForm();
		AForm(const std::string &name);
		AForm(const std::string &name, unsigned int signGrade, unsigned int ExecGrade);
		AForm(const std::string &name, unsigned int signGrade, unsigned int ExecGrade, const std::string &target);

		virtual ~AForm();
		AForm(const AForm &src);
		AForm &operator=(const AForm &rhs);

		const std::string	&getName() const;
		const std::string	&getTarget() const;
		const unsigned int	&getSignGrade() const;
		const unsigned int	&getExecGrade() const;
		bool				getSignature() const;

		void				beSigned(const Bureaucrat &bureaucrat);
		void				setTarget(const std::string &target);
		virtual void		execute(const Bureaucrat &bureaucrat) const = 0;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char	*what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char	*what() const throw();
		};

		class NotSignedException : public std::exception {
			public:
				virtual const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &os, const AForm &ref);

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







