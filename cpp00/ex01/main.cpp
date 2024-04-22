/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 03:54:04 by mflury            #+#    #+#             */
/*   Updated: 2024/04/22 08:11:43 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main() {
	PhoneBook repository;
	std::string input;

	for (;;) {
		std::cout << "\033[2J\033[H";
		std::cout << "PhoneBook: What are we doing today? (ADD/SEARCH/EXIT)" <<  std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof() == 1)
			break;
		if (input == "ADD" || input == "add")
			repository.addContact();
		else if (input == "SEARCH" || input == "search")
			repository.searchContact();
		else if (input == "EXIT" || input == "exit")
			break;
		else {
			std::cout << "\033[1A";
			std::cout << "\033[2K";
		}
	}
	return 0;
}
