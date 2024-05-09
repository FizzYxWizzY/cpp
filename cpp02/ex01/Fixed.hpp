/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:16:51 by mflury            #+#    #+#             */
/*   Updated: 2024/05/09 04:11:37 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
# define Fixed_HPP

#include <iostream>

class Fixed {
	private:
		int _nbr;
		static const int _precision = 8;
	
	public:
		Fixed();
		Fixed(int value);
		~Fixed();
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &rhs);
		int getRawBits() const;
		void setRawBits(int const raw);
};

#endif