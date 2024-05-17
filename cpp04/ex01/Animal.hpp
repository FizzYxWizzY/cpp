/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:09:33 by mflury            #+#    #+#             */
/*   Updated: 2024/05/17 04:08:01 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
# define Animal_HPP

#include <iostream>

class Animal {
	protected:
		std::string _type;
		
	public:
		Animal();
		Animal(std::string const &type);
		virtual ~Animal();
		Animal(const Animal &src);
		Animal &operator=(const Animal &rhs);
		
		std::string const &getType() const;

		void virtual makeSound() const;
};

#endif