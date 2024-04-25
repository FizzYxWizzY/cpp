/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:22:26 by mflury            #+#    #+#             */
/*   Updated: 2024/04/24 13:44:36 by mflury           ###   ########.fr       */
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
	Zombie(const std::string _name);
	~Zombie();
	void announce();
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif