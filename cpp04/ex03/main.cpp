/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:57:20 by mflury            #+#    #+#             */
/*   Updated: 2024/05/19 18:33:11 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main() {
	std::string name = "Bob";
	Character bob(name);
	AMateria *materia = new Ice();
	AMateria *materia2 = materia->clone();
	
	std::cout << materia->getType() << std::endl;
	delete materia;
	materia2->use(bob);
	
	bob.equip(materia2);

	bob.use(0, bob);
	
	return 0;
}
