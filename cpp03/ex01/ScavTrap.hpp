/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 00:42:54 by mflury            #+#    #+#             */
/*   Updated: 2024/05/12 01:36:30 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	private:
		
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &src);
		ScavTrap &operator=(const ScavTrap &rhs);

		void guardGate();
};

#endif