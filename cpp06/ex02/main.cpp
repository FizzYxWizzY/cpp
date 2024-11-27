/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:00:36 by mflury            #+#    #+#             */
/*   Updated: 2024/11/26 14:13:19 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

static Base *generate(void)
{
	srand(time(0));
	int index = rand() % 3;
	if (index == 0) {
		std::cout << "Generating A..." << std::endl;
		return new A;
	} else if (index == 1) {
		std::cout << "Generating B..." << std::endl;
		return new B;
	} else {
		std::cout << "Generating C..." << std::endl;
		return new C;
	}
}

static void identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "Type: A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "Type: B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "Type: C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

static void identify(Base &p)
{
	try
	{
		A var = dynamic_cast<A &>(p);
		std::cout << "Type: A" << std::endl;
		return;
	}
	catch (std::exception &err)
	{
	}
	try
	{
		B var = dynamic_cast<B &>(p);
		std::cout << "Type: B" << std::endl;
		return;
	}
	catch (std::exception &err)
	{
	}
	try
	{
		C var = dynamic_cast<C &>(p);
		std::cout << "Type: C" << std::endl;
	}
	catch (std::exception &err)
	{
	}
}

int main()
{
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	return 0;
}