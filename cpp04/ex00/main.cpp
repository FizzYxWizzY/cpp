/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:39:28 by mflury            #+#    #+#             */
/*   Updated: 2024/05/16 13:19:44 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main() {
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		std::cout << j->getType() << std::endl;
		std::cout << i->getType() << std::endl;
		std::cout << meta->getType() << std::endl;
		
		j->makeSound();
		i->makeSound();
		meta->makeSound();

		delete j;
		delete i;
		delete meta;
	}
	{
		const WrongAnimal *meta = new WrongAnimal();
		const WrongAnimal *j = new WrongDog();
		const WrongAnimal *i = new WrongCat();

		std::cout << j->getType() << std::endl;
		std::cout << i->getType() << std::endl;
		std::cout << meta->getType() << std::endl;

		j->makeSound();
		i->makeSound();
		meta->makeSound();

		delete j;
		delete i;
		delete meta;
	}
	return 0;
}
