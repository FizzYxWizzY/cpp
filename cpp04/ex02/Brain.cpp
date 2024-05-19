/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:24:06 by mflury            #+#    #+#             */
/*   Updated: 2024/05/18 23:25:52 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &src) {
	for (int i = 0; i < 100; ++i) {
			this->_ideas[i] = src._ideas[i];
		}
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs) {
	if (this != &rhs) {
		for (int i = 0; i < 100; ++i) {
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	std::cout << "Brain assignment operator called" << std::endl;
	return *this;
}