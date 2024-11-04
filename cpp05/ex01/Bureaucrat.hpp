/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:56:36 by mflury            #+#    #+#             */
/*   Updated: 2024/11/04 03:33:21 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

#include <iostream>

# define MAX_GRADE 1
# define MIN_GRADE 150

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
		Bureaucrat(std::string &name);
		Bureaucrat(int grade);
		Bureaucrat(std::string &name, int grade);

		~Bureaucrat();
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat &operator=(const Bureaucrat &rhs);

		void				setGrade(int grade);
		int					getGrade() const;
		const std::string	&getName() const;

		void				promote();
		void				demote();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &ref);

#endif