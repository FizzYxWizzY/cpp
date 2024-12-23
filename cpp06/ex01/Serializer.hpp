/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 03:41:07 by mflury            #+#    #+#             */
/*   Updated: 2024/11/26 11:30:46 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Serializer_HPP
# define Serializer_HPP

#include <iostream>
#include <string>
#include <stdint.h>

typedef struct data {
	std::string data;
 } Data;

class Serializer {
	private:
		Serializer();
		
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif