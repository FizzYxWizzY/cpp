/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:56:36 by mflury            #+#    #+#             */
/*   Updated: 2024/11/23 20:21:14 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

#include <iostream>
#include "AForm.hpp"

# ifndef MAX_GRADE
# define MAX_GRADE 1
# endif
# ifndef MIN_GRADE
# define MIN_GRADE 150
# endif

class AForm;

class Bureaucrat {
	private:
		const std::string	_name;
		unsigned int		_grade;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
	
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name);
		Bureaucrat(unsigned int grade);
		Bureaucrat(const std::string &name, unsigned int grade);

		~Bureaucrat();
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat &operator=(const Bureaucrat &rhs);

		void				setGrade(unsigned int grade);
		unsigned int		getGrade() const;
		const std::string	&getName() const;

		void				promote();
		void				demote();

		void				signForm(AForm &form) const;
		void				executeForm(AForm const & form);
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &ref);

#endif