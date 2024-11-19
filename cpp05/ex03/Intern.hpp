/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:21:48 by mflury            #+#    #+#             */
/*   Updated: 2024/11/14 14:00:50 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_HPP
# define Intern_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern {
	private:
		
	public:
		Intern();
		~Intern();
		Intern(const Intern &src);
		Intern &operator=(const Intern &rhs);

		AForm *makeForm(const std::string &formName, const std::string &target) const ;
		

};

#endif