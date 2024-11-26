/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 04:07:30 by mflury            #+#    #+#             */
/*   Updated: 2024/11/26 09:27:02 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(/*int argc, char **argv*/) {
	Data data = {"Hello World!"};
	uintptr_t value = 0;
	std::cout << data.data << std::endl;
	value = Serializer::serialize(&data);
	std::cout << value << std::endl;
	data = *Serializer::deserialize(value);
	std::cout << data.data << std::endl;
	return 0;
}
