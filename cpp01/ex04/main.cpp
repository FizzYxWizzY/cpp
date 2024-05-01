/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:59:14 by mflury            #+#    #+#             */
/*   Updated: 2024/04/29 22:33:58 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {
	
	std::ifstream file(argv[1]);
    if (!file.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }

    // Read the file line by line
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl; // Output the line
    }

    // Close the file
    file.close();

	return 0;
}