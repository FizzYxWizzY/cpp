/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 03:54:04 by mflury            #+#    #+#             */
/*   Updated: 2024/04/15 07:39:53 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	main(){
	Contact someone;

	someone.setFirstName("Mc");
	someone.setLastName("Flurry");
	someone.setNickname("an IceCream");
	someone.setPhone("3615");
	someone.setSecret("ba! dam! dam! ta! ta! i'm lovin' it!");
	std::cout << someone.getFirstName() << someone.getLastName() <<
		 " is " << someone.getNickname() + " au " << someone.getPhone() + "." <<
		 std::endl;
	std::cout << someone.getSecret() << std::endl;
	return 0;
}