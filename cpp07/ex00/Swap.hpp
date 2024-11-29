/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Swap.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 04:39:23 by mflury            #+#    #+#             */
/*   Updated: 2024/11/28 09:19:35 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Swap_HPP
#define Swap_HPP

template <typename T>
void swap(T &first, T &second) {
	T tmp = first;
	first = second;
	second = tmp;
}

#endif