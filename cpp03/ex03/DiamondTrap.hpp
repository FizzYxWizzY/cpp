/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 02:23:06 by mflury            #+#    #+#             */
/*   Updated: 2024/05/12 04:41:09 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: virtual public ScavTrap, virtual public FragTrap {
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &src);
		DiamondTrap &operator=(const DiamondTrap &rhs);

		void whoiam();
		void attack(std::string const &target);

		std::string &getName();
};

#endif