/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:24:30 by mflury            #+#    #+#             */
/*   Updated: 2024/11/29 08:57:14 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <iostream>

static void init_cntr(std::vector<int> &vec)
{
	vec.push_back(0);
	vec.push_back(2);
	vec.push_back(4);
	vec.push_back(6);
	vec.push_back(8);
	vec.push_back(10);
	vec.push_back(12);
}

static void init_cntr(std::list<int> &lst) {
	lst.push_back(0);
	lst.push_back(2);
	lst.push_back(4);
	lst.push_back(6);
	lst.push_back(8);
	lst.push_back(10);
	lst.push_back(12);
}

static void init_cntr(std::deque<int> &dq) {
	dq.push_back(0);
	dq.push_back(2);
	dq.push_back(4);
	dq.push_back(6);
	dq.push_back(8);
	dq.push_back(10);
	dq.push_back(12);
}

int main()
{
	{
		std::cout << "TEST VECTOR:" << std::endl;
		std::vector<int> cntr;
		init_cntr(cntr);

		int toFind = 6;
		std::cout << "toFind: " << toFind << std::endl;
		try
		{
			::easyfind(cntr, toFind);
			std::cout << toFind << " is in vector." << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << toFind << " - " << e.what() << " in vector." << std::endl;
		}

		std::cout << std::endl;

		toFind = 7;
		std::cout << "toFind: " << toFind << std::endl;
		try
		{
			::easyfind(cntr, toFind);
			std::cout << toFind << " is in vector." << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << toFind << " - " << e.what() << " in vector." << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "TEST LIST:" << std::endl;
		std::list<int> cntr;
		init_cntr(cntr);

		int toFind = 10;
		std::cout << "toFind: " << toFind << std::endl;
		try
		{
			::easyfind(cntr, toFind);
			std::cout << toFind << " is in list." << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << toFind << " - " << e.what() << " in list." << std::endl;
		}

		std::cout << std::endl;

		toFind = 9;
		std::cout << "toFind: " << toFind << std::endl;
		try
		{
			::easyfind(cntr, toFind);
			std::cout << toFind << " is in list." << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << toFind << " - " << e.what() << " in list." << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "TEST DEQUE:" << std::endl;
		std::deque<int> cntr;
		init_cntr(cntr);

		int toFind = 4;
		std::cout << "toFind: " << toFind << std::endl;
		try
		{
			::easyfind(cntr, toFind);
			std::cout << toFind << " is in deque." << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << toFind << " - " << e.what() << " in deque." << std::endl;
		}

		std::cout << std::endl;

		toFind = 5;
		std::cout << "toFind: " << toFind << std::endl;
		try
		{
			::easyfind(cntr, toFind);
			std::cout << toFind << " is in deque." << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << toFind << " - " << e.what() << " in deque." << std::endl;
		}
	}
	return 0;
}
