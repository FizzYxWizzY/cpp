/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:31:07 by mflury            #+#    #+#             */
/*   Updated: 2024/04/26 05:21:56 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

int main() {
	Weapon item = Weapon("club");
	HumanA bob("bob", item);
	bob.attack();
	item.setType("other club");
	bob.attack();
	return 0;
}