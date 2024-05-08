/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:23:46 by mflury            #+#    #+#             */
/*   Updated: 2024/05/02 08:02:17 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_HPP
# define Harl_HPP

#include <iostream>
#include <string>

class Harl {
private:
	void debug() const;
	void info() const;
	void warning() const;
	void error() const;

public:
	Harl();
	~Harl();
	Harl(const Harl& src);
	Harl& operator=(const Harl& rhs);
	void complain(std::string level) const;
};

#endif