/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 02:23:30 by mflury            #+#    #+#             */
/*   Updated: 2024/04/15 06:28:36 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

void strToUpper(std::string &str) {
    for (std::string::iterator i = str.begin(); i != str.end(); i++) {
        *i = std::toupper(*i);
    }
}

int main(int argc, char **argv) {
	std::string msg;
	if (argc < 2) {
		msg = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	} else {
		for (int i = 1; i < argc; i++) {
        	msg += argv[i];
        	if (i != argc - 1) {
            	msg += " ";
        	}
    	}
	    strToUpper(msg);
	}
	std::cout << msg << std::endl;
	return 0;
}
