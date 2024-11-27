/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Min.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 04:44:26 by mflury            #+#    #+#             */
/*   Updated: 2024/11/27 08:41:00 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Min_HPP
# define Min_HPP

template <typename T>

T const &min(T const &first, T const &second) {
	return first < second ? first : second;
}

#endif