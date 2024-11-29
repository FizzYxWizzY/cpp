/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 09:16:47 by mflury            #+#    #+#             */
/*   Updated: 2024/11/28 12:06:27 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_TPP
#define Array_TPP

#include "Array.hpp"

template <class T>
Array<T>::Array()
{
	this->_elements = new T[0];
	this->_size = 0;
}

template <class T>
Array<T>::Array(unsigned int i)
{
	this->_elements = new T[i];
	this->_size = i;
}

template <class T>
Array<T>::Array(Array const &src)
{
	this->_elements = new T[src.size()];
	this->_size = src.size();
	for (unsigned int i = 0; i < src.size(); ++i)
	{
		this->_elements[i] = src[i];
	}
}

template <class T>
Array<T>::~Array()
{
	delete[] this->_elements;
}

template <class T>
Array<T> &Array<T>::operator=(Array<T> const &rhs)
{
	if (this != &rhs)
	{
		delete[] this->_elements;
		this->_elements = new T[rhs.size()];
		this->_size = rhs.size();
		for (unsigned int i = 0; i < rhs.size(); ++i)
		{
			this->_elements[i] = rhs[i];
		}
	}
	return *this;
}

template <class T>
T &Array<T>::operator[](unsigned int i) const
{
	if (i >= this->_size)
		throw(OutOfRangeException());
	return this->_elements[i];
}

template <class T>
unsigned int Array<T>::size() const
{
	return _size;
}

template <class T>
const char *Array<T>::OutOfRangeException::what() const throw()
{
	return "Array: Out of range";
}

#endif