/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:22:26 by mflury            #+#    #+#             */
/*   Updated: 2024/04/24 16:27:32 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
# define Zombie_HPP

#include <iostream>

class Zombie
{
private:
	std::string _name;
	void setName(std::string name);

public:
	Zombie();
	Zombie(const std::string _name);
	~Zombie();
	void announce();
};

#endif