/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:38:20 by mflury            #+#    #+#             */
/*   Updated: 2024/11/29 14:53:23 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME
#define PMERGEME

#include <list>
#include <vector>

class PmergeMe {
   public:
	PmergeMe(std::vector<unsigned int> &array);
	PmergeMe(std::list<unsigned int> &lst);
	~PmergeMe();

   private:
	PmergeMe();
	PmergeMe &operator=(PmergeMe const &src);
	PmergeMe(PmergeMe const &src);
	void mergeSort(std::vector<unsigned int> &array);
	void mergeSort(std::list<unsigned int> &lst);
};

#endif