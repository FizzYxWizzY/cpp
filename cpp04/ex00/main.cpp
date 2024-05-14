/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:39:28 by mflury            #+#    #+#             */
/*   Updated: 2024/05/14 08:43:26 by mflury           ###   ########.fr       */
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

		j->makeSound();
		i->makeSound();
		meta->makeSound();

		delete j;
		delete i;
		delete meta;
	}
	return 0;
}
