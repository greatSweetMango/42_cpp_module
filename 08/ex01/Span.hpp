/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:39:27 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/08 16:23:31 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <set>

class Span
{
	private:
		size_t				_size;
		std::multiset<int>	_elements;
	public:
		Span();
		Span(size_t size);
		Span(const Span &copy);
		~Span();

		/* Exception class */
		class SpanIsFullException : public std::exception
		{
			public:
				const char	*what() const throw();
		};

		class ElementsTooFewException : public std::exception
		{
			public:
				const char	*what() const throw();
		};
		
		/* Member functions */
		void	addNumber(int value);
		size_t	shortestSpan() const;
		size_t	longestSpan() const;

		/* Operator overloads */
		Span	&operator=(const Span &src);
};
