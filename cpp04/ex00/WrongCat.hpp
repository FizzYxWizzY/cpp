/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:32:15 by mflury            #+#    #+#             */
/*   Updated: 2024/05/14 03:31:57 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

#include <iostream>
#include "WrongAnimal.hpp"


class WrongCat: public WrongAnimal {
	private:
		
	public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat(const WrongCat &src);
		WrongCat &operator=(const WrongCat &rhs);

		void makeSound() const;
};

#endif