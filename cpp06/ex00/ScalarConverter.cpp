/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 03:13:34 by mflury            #+#    #+#             */
/*   Updated: 2024/11/26 01:05:45 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string &input) {
            if (input.empty()) {
                std::cout << "Invalid input." << std::endl;
                return ;
            }

            char charValue = 0;
            int intValue = 0;
            float floatValue = 0.0f;
            double doubleValue = 0.0;
            bool charPossible = true;
            bool intPossible = true;

            if (input.size() == 1 && !std::isdigit(input[0])) {
                charValue = input[0];
                intValue = static_cast<int>(charValue);
                floatValue = static_cast<float>(intValue);
                doubleValue = static_cast<double>(intValue);
            } else if (input == "-inff" || input == "+inff" || input == "nanf") {
                floatValue = std::strtof(input.c_str(), NULL);
                doubleValue = static_cast<double>(floatValue);
                charPossible = false;
                intPossible = false;
            } else if (input == "-inf" || input == "+inf" || input == "nan") {
                doubleValue = std::strtod(input.c_str(), NULL);
                floatValue = static_cast<float>(doubleValue);
                charPossible = false;
                intPossible = false;
            } else {
                char* endPtr;
                doubleValue = std::strtod(input.c_str(), &endPtr);

                if (*endPtr == 'f' && *(endPtr + 1) == '\0') {
                    floatValue = static_cast<float>(doubleValue);
                } else if (*endPtr == '\0') {
                    floatValue = static_cast<float>(doubleValue);
                } else {
                    std::cout << "Invalid input." << std::endl;
                    return;
                }

                if (doubleValue >= INT_MIN && doubleValue <= INT_MAX) {
                    intValue = static_cast<int>(doubleValue);
                } else {
                    intPossible = false;
                }

                if (intPossible && intValue >= 0 && intValue <= 127) {
                    charValue = static_cast<char>(intValue);
                } else {
                    charPossible = false;
                }
            }

            /*  ~~~~~ Print result ~~~~~  */
            std::cout << "Conversion results:" << std::endl;

            if (charPossible) {
                if (std::isprint(charValue)) {
                    std::cout << "char: '" << charValue << "'" << std::endl;
                } else {
                    std::cout << "char: Non-displayable" << std::endl;
                }
            } else {
                std::cout << "char: impossible" << std::endl;
            }

            if (intPossible) {
                std::cout << "int: " << intValue << std::endl;
            } else {
                std::cout << "int: impossible" << std::endl;
            }

            // if (floatValue > ) {}

            if (floatValue == static_cast<int>(floatValue) && floatValue < 1000000) {
                std::cout << "float: " << floatValue << ".0f" << std::endl;
            } else {
                std::cout << "float: " << floatValue << "f" << std::endl;
            }

            if (doubleValue == static_cast<int>(doubleValue) && doubleValue < 1000000) {
                std::cout << "double: " << doubleValue << ".0" << std::endl;
            } else {
                std::cout << "double: " << doubleValue << std::endl;
            }
        }
