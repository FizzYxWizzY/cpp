/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 03:54:04 by mflury            #+#    #+#             */
/*   Updated: 2024/04/19 12:32:18 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main() {
	PhoneBook repository;
	std::string input;

	for (;;) {
		std::cout << "PhoneBook: What are we doing today? (ADD/SEARCH/EXIT)" <<  std::endl;
		std::getline(std::cin, input);
		if (input == "ADD" || input == "add")
			repository.addContact();
		else if (input == "SEARCH" || input == "search")
			repository.searchContact();
		else if (input == "EXIT" || input == "exit")
			break;
	}
	return 0;
}
