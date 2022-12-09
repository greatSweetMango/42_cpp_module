/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:07:24 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/06 19:17:13 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
	private:
		T		*_arr;
		size_t	_size;
	public:
		Array();
		Array(size_t size);
		Array(const Array &copy);
		~Array();
		
		/* Member functions */
		size_t	size(void) const;

		/* Exception class */
		class OutOfArrayException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		/* Operator overloads */
		Array	&operator=(const Array &src);
		T	&operator[](size_t index);
};


#include "Array.tpp"
