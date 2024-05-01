/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 01:59:14 by mflury            #+#    #+#             */
/*   Updated: 2024/05/01 10:13:26 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

// just because we cant use std::replace()...
void replaceAll(std::string &str, const std::string &from, const std::string &to) {
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "parameters must be \"<filename> , s1, s2\"." << std::endl;
        return 1;
    }
    // Open input file
    std::string inFileName = argv[1];
    std::ifstream inFile(inFileName.c_str());
    if (!inFile.is_open()) {
        std::cerr << "Failed to open the input file." << std::endl;
        return 1;
    }
    // Open output file
    std::string outFileName = inFileName + ".replace";
    std::ofstream outFile(outFileName.c_str());
    if (!outFile.is_open()) {
        std::cerr << "Failed to create the output file." << std::endl;
        inFile.close();
        return 1; // Return error
    }
    // Strings for target and replacement
    std::string target = argv[2];
    std::string replacement = argv[3];
    // Read input file line by line, replace target string, and write to output file
    std::string line;
    while (std::getline(inFile, line)) {
        replaceAll(line, target, replacement);
        outFile << line << std::endl;
    }
    // Close files
    inFile.close();
    outFile.close();
    std::cout << "File copied with string replacement." << std::endl;
    return 0;
}