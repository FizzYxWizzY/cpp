/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:09:33 by mflury            #+#    #+#             */
/*   Updated: 2024/05/17 10:00:08 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

#include <iostream>

class AAnimal {
	protected:
		std::string _type;
		
	public:
		AAnimal();
		AAnimal(std::string const &type);
		virtual ~AAnimal();
		AAnimal(const AAnimal &src);
		AAnimal &operator=(const AAnimal &rhs);
		
		std::string const virtual &getType() const = 0;

		void virtual makeSound() const = 0;
};

#endif