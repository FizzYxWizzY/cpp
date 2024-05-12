/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 01:53:48 by mflury            #+#    #+#             */
/*   Updated: 2024/05/12 02:02:24 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	private:
		
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &src);
		FragTrap &operator=(const FragTrap &rhs);

		void highFiveGuys();
};

#endif