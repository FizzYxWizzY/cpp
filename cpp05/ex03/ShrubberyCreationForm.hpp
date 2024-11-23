/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:11:24 by mflury            #+#    #+#             */
/*   Updated: 2024/11/23 19:01:33 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

#include "AForm.hpp"
#include <iostream>

class ShrubberyCreationForm : public AForm {
	private:
		
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &target);

		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

		virtual void	execute(const Bureaucrat &bureaucrat) const;

		static AForm *createForm(const std::string& target);
};

#endif