/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:24:23 by mflury            #+#    #+#             */
/*   Updated: 2024/05/18 23:18:16 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef Brain_HPP
 # define Brain_HPP
 
 #include <iostream>
 
 class Brain {
	 private:
		 std::string _ideas[100];
	 public:
		 Brain();
		 ~Brain();
		 Brain(const Brain &src);
		 Brain &operator=(const Brain &rhs);
 };
 
 #endif