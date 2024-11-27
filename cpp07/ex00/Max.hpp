/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Max.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 04:45:34 by mflury            #+#    #+#             */
/*   Updated: 2024/11/27 08:44:36 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Max_HPP
# define Max_HPP

template <typename T>

T const &max(T const &first, T const &second) {
	return first > second ? first : second;
}

#endif