/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:57:20 by mflury            #+#    #+#             */
/*   Updated: 2024/05/17 13:55:52 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"

int main()
{	
	std::string name = "Bob";
	
	AMateria *materia = new Cure();
	AMateria *materia2 = materia->clone();
	
	std::cout << materia->getType() << std::endl; 
	delete materia;
	
	materia2->use(name);
	delete materia2;
	
	return 0;
}
