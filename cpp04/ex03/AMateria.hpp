/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:56:30 by mflury            #+#    #+#             */
/*   Updated: 2024/05/20 04:38:21 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMateria_HPP
# define AMateria_HPP

#include <iostream>
#include "ICharacter.hpp"

class	ICharacter;
class AMateria {
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(std::string const &type);
		virtual ~AMateria();
		AMateria(const AMateria &src);
		AMateria &operator=(const AMateria &rhs);

		std::string const &getType() const;

		virtual AMateria *clone() const = 0;
		
		virtual void use(ICharacter &target);
};

#endif