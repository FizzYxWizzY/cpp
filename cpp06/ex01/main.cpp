/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 04:07:30 by mflury            #+#    #+#             */
/*   Updated: 2024/11/26 11:33:43 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(/*int argc, char **argv*/) {
	Data data = {"Hello World!"};
	uintptr_t value = 0;
	std::cout << "Base data: " << data.data << std::endl;
	value = Serializer::serialize(&data);
	std::cout << "data to uintptr: " << value << std::endl;
	data = *Serializer::deserialize(value);
	std::cout << "uintptr to data: " << data.data << std::endl;
	return 0;
}
