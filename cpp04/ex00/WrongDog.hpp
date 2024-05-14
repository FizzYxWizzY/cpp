/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:34:37 by mflury            #+#    #+#             */
/*   Updated: 2024/05/14 02:38:32 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongDog_HPP
# define WrongDog_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal {
	private:
		
	public:
		WrongDog();
		virtual ~WrongDog();
		WrongDog(const WrongDog &src);
		WrongDog &operator=(const WrongDog &rhs);

		void makeSound() const;
};

#endif