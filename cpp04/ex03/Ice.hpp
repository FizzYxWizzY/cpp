/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:34:32 by mflury            #+#    #+#             */
/*   Updated: 2024/05/19 18:38:57 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
# define Ice_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice: virtual public AMateria {
	private:
		
	public:
		Ice();
		~Ice();
		Ice(const Ice &src);
		Ice &operator=(const Ice &rhs);

		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif