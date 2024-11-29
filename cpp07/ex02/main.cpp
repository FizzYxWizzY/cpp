/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 02:37:30 by mflury            #+#    #+#             */
/*   Updated: 2024/11/28 13:11:45 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.tpp"


int main()
{
	
	{
		std::cout << "-- TEST OPERATOR --" << std::endl;
		Array<int> arr1(8);
		std::cout << "arr1.size() = " << arr1.size() << std::endl;
		for (unsigned int i = 0; i < arr1.size(); ++i)
		{
			arr1[i] = i * 2;
		}
		Array<int> arr2;
		std::cout << "arr2.size() = " << arr2.size() << std::endl;
		arr2 = arr1;
		std::cout << "arr2.size() = " << arr2.size() << std::endl;
		for (unsigned int i = 0; i < arr2.size(); ++i)
		{
			std::cout << arr2[i] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "-- TEST OUT OF BOUNDS --" << std::endl;
		Array<std::string> arr1(8);
		std::cout << "arr1.size() = " << arr1.size() << std::endl;
		try
		{
			arr1[7] = "42";
			arr1[8] = "Lausanne";
		}
		catch (std::exception &err)
		{
			std::cerr << err.what() << std::endl;
		}
		std::cout << "arr1.size() = " << arr1.size() << std::endl;
		try
		{
			arr1[-1] = "42";
		}
		catch (std::exception &err)
		{
			std::cerr << err.what() << std::endl;
		}
	}
	return 0;
}