/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:22:26 by mflury            #+#    #+#             */
/*   Updated: 2024/04/25 05:27:24 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
# define Zombie_HPP

#include <iostream>

#define HORDE_SIZE 1
#define NAME "iencli"

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	Zombie(const std::string _name);
	~Zombie();
	void setName(std::string name);
	void announce();
};

Zombie	*zombieHorde(int n, std::string name);

#endif