/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 04:14:56 by mflury            #+#    #+#             */
/*   Updated: 2024/11/25 05:50:25 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Converter needs exactly ONE argument. (./convert <value_to_convert>)" << std::endl;
        return 1;
    }
    
    ScalarConverter::convert(argv[1]);


	/*  ~~~~~ Tests ~~~~~  */
    // std::cout << "testing with a char..." << std::endl;
    // ScalarConverter::convert("inf");
    // std::cout << std::endl;
    // std::cout << "testing with an int..." << std::endl;
    // ScalarConverter::convert("42");
    // std::cout << std::endl;
    // std::cout << "testing with a float..." << std::endl;
    // ScalarConverter::convert("42.0f");
    // std::cout << std::endl;
    // ScalarConverter::convert("-inf");
    // std::cout << std::endl;
    // ScalarConverter::convert("nanf");
    // std::cout << std::endl;
    // ScalarConverter::convert("+inff");
    // std::cout << std::endl;
    // ScalarConverter::convert("10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
    // std::cout << std::endl;
	return 0;
}
