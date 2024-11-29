/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:19:22 by mflury            #+#    #+#             */
/*   Updated: 2024/11/29 02:18:05 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
# define Span_HPP

#include <algorithm>
#include <vector>
#include <stdexcept>

class Span
{
public:
	Span(unsigned int n);
	Span(Span const &src);
	~Span();
	Span &operator=(Span const &rhs);

	void addNumber(int number);
	int shortestSpan() const;
	int longestSpan() const;

	template <typename Iter>
	void addRange(Iter begin, Iter end)
	{
		while (begin != end)
		{
			addNumber(*begin);
			++begin;
		}
	}

private:
	unsigned int _maxSize;
	std::vector<int> _data;
	Span();
};

#endif