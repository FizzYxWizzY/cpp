/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:37:23 by mflury            #+#    #+#             */
/*   Updated: 2024/11/29 14:47:53 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <string>

class RPN {
   public:
	RPN(std::string const &str);
	RPN(RPN const &src);
	RPN &operator=(RPN const &rhs);
	~RPN();

   private:
	std::stack<int> _stack;

	RPN();
};

#endif