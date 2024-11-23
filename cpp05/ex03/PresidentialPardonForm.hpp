/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:55:05 by mflury            #+#    #+#             */
/*   Updated: 2024/11/23 18:53:57 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm {
	private:
		
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target);
		
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

		virtual void	execute(const Bureaucrat &bureaucrat) const;

		static AForm *createForm(const std::string &target);
};

#endif