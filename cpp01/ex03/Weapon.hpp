/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:32:12 by mflury            #+#    #+#             */
/*   Updated: 2024/04/26 05:03:33 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_HPP
# define Weapon_HPP

#include <iostream>

class Weapon {
private:
	std::string _type;

public:
	Weapon();
	Weapon(std::string type);
	virtual ~Weapon();
	void setType(const std::string type);
	std::string const &getType() const;
};

#endif