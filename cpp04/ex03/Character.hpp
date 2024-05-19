/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 00:06:43 by mflury            #+#    #+#             */
/*   Updated: 2024/05/19 18:41:57 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
# define Character_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: virtual public ICharacter {
	private:
		std::string _name;
		AMateria *_inventory[4];
	public:
		Character();
		Character(std::string &name);
		~Character();
		Character(const Character &src);
		Character &operator=(const Character &rhs);

		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif