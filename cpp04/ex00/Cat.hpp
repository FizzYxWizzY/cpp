/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:32:15 by mflury            #+#    #+#             */
/*   Updated: 2024/05/14 02:38:28 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

#include <iostream>
#include "Animal.hpp"


class Cat: public Animal {
	private:
		
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &rhs);

		void makeSound() const;
};

#endif