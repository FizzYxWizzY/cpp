/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:29:32 by mflury            #+#    #+#             */
/*   Updated: 2024/11/23 20:37:13 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

#include "AForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm {
	private:
		
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target);

		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

		virtual void execute(const Bureaucrat &bureaucrat) const;

		static AForm *createForm(const std::string& target);
};

#endif