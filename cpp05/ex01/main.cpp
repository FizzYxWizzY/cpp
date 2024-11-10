/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:57:20 by mflury            #+#    #+#             */
/*   Updated: 2024/11/10 03:47:50 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		std::string name = "John";
		Bureaucrat john(name, 42);
		Form form("Contract", 140, 45);
		john.signForm(form);
		Form form2("Contract2", 0, 45);
		john.signForm(form2);
		std::cout << form2 << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	

	// std::cout << john << std::endl;
	// try {
	// 	john.setGrade(150);
	// 	std::cout << "hello" << std::endl;
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << john << std::endl;
	// try {
	// 	john.demote();
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << john << std::endl;

	// try {
	// 	john.setGrade(1);
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << john << std::endl;
	// try {
	// 	john.promote();
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << john << std::endl;
	
	return 0;
}