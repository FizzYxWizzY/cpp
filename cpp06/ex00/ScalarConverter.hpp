/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 04:14:32 by mflury            #+#    #+#             */
/*   Updated: 2024/11/25 06:23:48 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <cctype>
#include <cmath>

class ScalarConverter {
    private:
        ScalarConverter();
    public:
        static void convert(const std::string &input);
};

#endif