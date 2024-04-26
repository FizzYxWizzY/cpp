/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:31:07 by mflury            #+#    #+#             */
/*   Updated: 2024/04/26 04:28:59 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

int main() {
	Weapon item("get");
	std::cout << item.getType() << "\n";
	item.setType("your mom");
	std::cout << item.getType() << std::endl;
	return 0;
}