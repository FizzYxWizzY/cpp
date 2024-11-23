/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:21:48 by mflury            #+#    #+#             */
/*   Updated: 2024/11/23 19:46:39 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_HPP
# define Intern_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

typedef AForm *(*FunctionPointer)(const std::string &target);
class Intern {
	private:
		
	public:
		Intern();
		~Intern();
		Intern(const Intern &src);
		Intern &operator=(const Intern &rhs);

		AForm *makeForm(const std::string &formName, const std::string &target) const ;

		class NonexistentFormException : public std::exception {
			public:
				virtual const char	*what() const throw();
		};

		

};

#endif