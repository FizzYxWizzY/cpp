/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 02:35:22 by mflury            #+#    #+#             */
/*   Updated: 2024/11/28 12:01:13 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
# define Array_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
    private:
        T* _elements;
        unsigned int _size;
        
    public:
        Array();
		Array(unsigned int i);
        ~Array();
        Array(const Array &src);
        Array &operator=(const Array &rhs);

	T &operator[](unsigned int i) const;
	unsigned int size() const;
	
	class OutOfRangeException : public std::exception {
			public:
				virtual const char	*what() const throw();
	};


};

#endif