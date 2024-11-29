/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:25:25 by mflury            #+#    #+#             */
/*   Updated: 2024/11/29 02:11:57 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Easyfind_HPP
#define Easyfind_HPP

#include <exception>
#include <algorithm>

class NotFoundException;

template <typename T>
int easyfind(T &container, int n)
{
	typename T::iterator it = std::find(container.begin(), container.end(), n);

	if (it == container.end())
		throw NotFoundException();
	return *it;
}

class NotFoundException : public std::exception
{
public:
	virtual const char *what() const throw()
	{
		return "Element not found";
	}
};

#endif