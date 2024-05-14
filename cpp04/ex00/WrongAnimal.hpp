/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:09:33 by mflury            #+#    #+#             */
/*   Updated: 2024/05/14 08:40:06 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string _type;
		
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal &operator=(const WrongAnimal &rhs);
		void makeSound() const;
};

#endif