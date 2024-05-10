/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:16:51 by mflury            #+#    #+#             */
/*   Updated: 2024/05/10 13:41:33 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
# define Fixed_HPP

#include <iostream>
#include <cmath>


class Fixed {
	private:
		int _nbr;
		static const int _precision = 8;
	
	public:
		Fixed();
		Fixed(int const value);
		Fixed(float const value);
		~Fixed();
		Fixed(const Fixed &src);
		
		Fixed &operator=(const Fixed &rhs);

		int operator>(const Fixed &rhs);
		int operator<(const Fixed &rhs);
		int operator>=(const Fixed &rhs);
		int operator<=(const Fixed &rhs);
		int operator==(const Fixed &rhs);
		int operator!=(const Fixed &rhs);

		int operator+(const Fixed &rhs);
		int operator-(const Fixed &rhs);
		int operator*(const Fixed &rhs);
		int operator/(const Fixed &rhs);
		Fixed &operator++();
		Fixed operator++(int value);

		
		int getRawBits() const;
		void setRawBits(int const raw);
		int toInt() const;
		float toFloat() const;
};

std::ostream &operator<<(std::ostream &o, const Fixed &rhs);

#endif