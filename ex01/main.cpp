/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 03:54:04 by mflury            #+#    #+#             */
/*   Updated: 2024/04/18 06:47:50 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main() {
	PhoneBook repository;
	Contact someone("Jean", "Caisse", "DesMegaLiasse", "3615", "ba! dam! dam! ta! ta! i'm lovin' it!");
	Contact someone2("jAiUnNomTropLongFaitChier");
	for (int i = 0; i < 2; i++)
		repository.addContact(someone);
	repository.showAllContact();
	for (int i = 0; i < 3; i++)
		repository.addContact(someone2);
	repository.showAllContact();
	return 0;
}
