/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:23:03 by mflury            #+#    #+#             */
/*   Updated: 2024/04/25 13:23:11 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main()
{
	std::string s = "HI THIS IS BRAIN.";
	std::string *sptr = &s;
	std::string &sref = s;

	std::cout << "Printing addresses..." << "\n";
	std::cout << "s: " << &s << "\n";
	std::cout << "sptr: " << &sptr << "\n";
	std::cout << "sref: " << &sref << "\n";
	

	std::cout << "Printing values..." << "\n";
	std::cout << "s: " << s << "\n";
	std::cout << "sptr: " << *sptr << "\n";
	std::cout << "sref: " << sref << "\n";
	
	std::cout << std::endl;
	return 0;
}
