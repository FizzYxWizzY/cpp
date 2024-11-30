/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:48:48 by mflury            #+#    #+#             */
/*   Updated: 2024/11/29 14:48:59 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>

#include "RPN.hpp"

#define RESET "\e[0m"
#define RED "\e[31m"

static void showUsage();

int main(int argc, char **argv) {
	if (argc != 2) {
		showUsage();
		return 1;
	}
	try {
		RPN test(argv[1]);
	} catch (std::exception &err) {
		std::cout << RED << "[!] " << err.what() << RESET << std::endl;
	}
	return 0;
}

static void showUsage() {
	std::cout << "Usage: ./RTN  \"<RTN expression>\"" << std::endl;
}