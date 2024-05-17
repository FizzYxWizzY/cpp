/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:32:15 by mflury            #+#    #+#             */
/*   Updated: 2024/05/17 10:18:09 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"


class Cat: public AAnimal {
	private:
		Brain *brain;
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &rhs);

		std::string const &getType() const ;

		void makeSound() const;
};

#endif