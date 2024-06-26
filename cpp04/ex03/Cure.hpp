/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:32:22 by mflury            #+#    #+#             */
/*   Updated: 2024/05/19 18:38:30 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP

#include <iostream>
#include "AMateria.hpp"
class Cure: virtual public AMateria {
	private:
		
	public:
		Cure();
		~Cure();
		Cure(const Cure &src);
		Cure &operator=(const Cure &rhs);

		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif