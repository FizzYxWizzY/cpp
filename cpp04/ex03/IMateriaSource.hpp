/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:08:48 by mflury            #+#    #+#             */
/*   Updated: 2024/05/20 12:13:41 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMateriaSource_HPP
# define IMateriaSource_HPP

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {};
		virtual void learnMateria(AMateria *) = 0;
		virtual AMateria *createMAteria(std::string const & type) = 0;
};

#endif