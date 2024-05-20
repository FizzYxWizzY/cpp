/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:57:20 by mflury            #+#    #+#             */
/*   Updated: 2024/05/20 11:56:54 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"


//TODO: check if nothin is missing for the materias (copy assignement etc)
int main() {
	std::string name = "Bob";
	Character bob(name);
	Cure *materia = new Cure();
	AMateria *materia2 = new Cure(*materia);
	
	std::cout << materia->getType() << std::endl;
	delete materia;
	materia2->use(bob);
	
	bob.equip(materia2);

	bob.use(0, bob);
	
	return 0;
}
