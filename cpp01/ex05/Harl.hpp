/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:23:46 by mflury            #+#    #+#             */
/*   Updated: 2024/05/01 14:36:03 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_HPP
# define Harl_HPP

#include <iostream>

class Harl {
private:
	void debug();
	void info();
	void warning();
	void error();

public:
	Harl();
	~Harl();
	Harl(const Harl& src);
	Harl& operator=(const Harl& rhs);
	void complain(std::string level);
};

#endif