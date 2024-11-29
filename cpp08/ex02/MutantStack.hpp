/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:52:59 by mflury            #+#    #+#             */
/*   Updated: 2024/11/29 02:53:19 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
# define MutantStack_HPP

#include <iostream>

class MutantStack {
	private:
		
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &src);
		MutantStack &operator=(const MutantStack &rhs);
};

#endif