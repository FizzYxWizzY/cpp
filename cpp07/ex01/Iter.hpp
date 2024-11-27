/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:04:01 by mflury            #+#    #+#             */
/*   Updated: 2024/11/27 11:38:01 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Iter_HPP
#define Iter_HPP

#include <cstddef>

template <typename T>
void iter(T *array, size_t length, void (*f)(T &)) {
	for (size_t i = 0; i < length; ++i) {
		f(array[i]);
	}
}

#endif