/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:35:34 by mflury            #+#    #+#             */
/*   Updated: 2024/11/29 14:00:04 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <fstream>
#include <stdexcept>
#include <iostream>
#include <sstream>
#include <cstdlib>

# define RESET "\e[0m"
# define RED "\e[31m"
# define GREEN "\e[32m"
# define CYAN "\e[36m"

class BitcoinExchange {
public:
	BitcoinExchange(std::string const &path);
	BitcoinExchange(BitcoinExchange const &src);
	BitcoinExchange &operator=(BitcoinExchange const &rhs);
	~BitcoinExchange();

	void getExchangeRate(std::string const &date, float value) const;

private:
	std::map<std::string, float> _mapData;

	BitcoinExchange();
	void _initMapData(std::string const &path);
	void _isValid(std::string const &date) const;
	void _isValid(float value) const;
};

#endif