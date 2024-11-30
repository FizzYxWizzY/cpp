/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:37:07 by mflury            #+#    #+#             */
/*   Updated: 2024/11/29 14:48:23 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}
RPN::RPN(std::string const &str) {
	std::istringstream iss(str);

	std::string token;
	while (iss >> token) {
		if (token == "+" || token == "-" || token == "*" || token == "/") {
			if (this->_stack.size() < 2) {
				throw std::runtime_error("invalid RPN expression");
			}
			int operand2 = this->_stack.top();
			this->_stack.pop();
			int operand1 = this->_stack.top();
			this->_stack.pop();

			if (token == "+") {
				this->_stack.push(operand1 + operand2);
			} else if (token == "-") {
				this->_stack.push(operand1 - operand2);
			} else if (token == "*") {
				this->_stack.push(operand1 * operand2);
			} else if (token == "/") {
				if (operand2 == 0) {
					throw std::runtime_error("division by zero");
				}
				this->_stack.push(operand1 / operand2);
			}
		} else {
			std::istringstream issToken(token);
			int number;

			if (!(issToken >> number)) {
				throw std::runtime_error("Unable to convert to number");
			}
			this->_stack.push(number);
		}
	}

	if (this->_stack.size() != 1) {
		throw std::runtime_error("invalid RPN expression");
	}
	std::cout << this->_stack.top() << std::endl;
}
RPN::RPN(RPN const &src) { this->_stack = src._stack; }
RPN &RPN::operator=(RPN const &rhs) {
	if (this != &rhs) {
		this->_stack = rhs._stack;
	}
	return *this;
}
RPN::~RPN() {}