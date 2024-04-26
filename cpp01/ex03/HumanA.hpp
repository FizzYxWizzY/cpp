/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 04:31:40 by mflury            #+#    #+#             */
/*   Updated: 2024/04/26 05:03:23 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
# define HumanA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
	std::string _name;
	Weapon _weapon;
public:
	HumanA(std::string name, Weapon Weapon);
	~HumanA();
	void attack();
	// HumanA(const HumanA& src);
	// HumanA &operator=(const HumanA& rhs);
};

#endif