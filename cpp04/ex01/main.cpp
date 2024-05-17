/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:39:28 by mflury            #+#    #+#             */
/*   Updated: 2024/05/17 08:39:08 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {	
	const Animal *animal[10];
	std::cout << "\nCeating the animals..." << std::endl;
	for (int i = 0; i < 10; ++i) {
		(i % 2) ? animal[i] = new Cat() : animal[i] = new Dog();
	}

	std::cout << "\nUsing the animals..." << std::endl;
	for (int i = 0; i < 10; ++i) {
		std::cout << animal[i]->getType() << std::endl;
	}

	std::cout << "\nDeleting the animals..." << std::endl;
	for (int i = 0; i < 10; ++i) {
		delete animal[i];
	}
	return 0;
}