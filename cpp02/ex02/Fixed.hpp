/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:16:51 by mflury            #+#    #+#             */
/*   Updated: 2024/05/11 20:31:35 by mflury           ###   ########.fr       */
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

		bool operator>(const Fixed &rhs) const;
		bool operator<(const Fixed &rhs) const;
		bool operator>=(const Fixed &rhs) const;
		bool operator<=(const Fixed &rhs) const;
		bool operator==(const Fixed &rhs) const;
		bool operator!=(const Fixed &rhs) const;

		Fixed operator+(const Fixed &rhs);
		Fixed operator-(const Fixed &rhs);
		Fixed operator*(const Fixed &rhs);
		Fixed operator/(const Fixed &rhs);
		
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);

		static Fixed &min(Fixed &src1, Fixed &src2);
		static const Fixed &min(const Fixed &src1, const Fixed &src2);
		static Fixed &max(Fixed &src1, Fixed &src2);
		static const Fixed &max(Fixed const &src1, Fixed const &src2);

		
		int getRawBits() const;
		void setRawBits(int const raw);
		int toInt() const;
		float toFloat() const;
};

std::ostream &operator<<(std::ostream &o, const Fixed &rhs);

#endif
