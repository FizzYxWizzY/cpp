/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:14:13 by mflury            #+#    #+#             */
/*   Updated: 2024/05/20 12:17:37 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MateriaSource_HPP
# define MateriaSource_HPP

#include <iostream>
#include "IMateriaSource.hpp"

// class IMateriaSource {
	// public:
		// virtual ~IMateriaSource() {};
		// virtual void learnMateria(AMateria *) = 0;
		// virtual AMateria *createMAteria(std::string const & type) = 0;
// };


class MateriaSource: public IMateriaSource {
	private:
		AMateria *_inventory[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &src);
		MateriaSource &operator=(const MateriaSource &rhs);
};

#endif