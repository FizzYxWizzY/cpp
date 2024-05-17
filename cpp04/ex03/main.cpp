/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:57:20 by mflury            #+#    #+#             */
/*   Updated: 2024/05/17 12:00:04 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

int main()
{
	AMateria *materia = new Ice();
	std::cout << materia->getType() << std::endl; 
	delete materia;
	return 0; 
}
