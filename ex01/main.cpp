/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 03:54:04 by mflury            #+#    #+#             */
/*   Updated: 2024/04/17 14:51:23 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(){
	// Contact someone("Mc", "Flurry", "an IceCream", "3615", "ba! dam! dam! ta! ta! i'm lovin' it!");

	// // someone.setFirstName("Mc");
	// // someone.setLastName("Flurry");
	// // someone.setNickname("an IceCream");
	// // someone.setPhone("3615");
	// // someone.setSecret("ba! dam! dam! ta! ta! i'm lovin' it!");
	// std::cout << someone.getFirstName() << someone.getLastName() <<
	// 	 " is " << someone.getNickname() + " au " << someone.getPhone() + "." <<
	// 	 std::endl;
	// std::cout << someone.getSecret() << std::endl;
	PhoneBook repository;
	Contact someone("Mc", "Flurry", "an IceCream", "3615", "ba! dam! dam! ta! ta! i'm lovin' it!");
	Contact someone2("Mc2", "Flurry", "an IceCream", "3615", "ba! dam! dam! ta! ta! i'm lovin' it!");
	repository.addContact(someone);
	repository.addContact(someone2);

	std::cout << someone.getFirstName() << someone.getLastName() <<
		 " is " << someone.getNickname() + " au " << someone.getPhone() + "." <<
		 std::endl;
	repository.showAllContact();
	return 0;
}
