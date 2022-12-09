/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:39:29 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/08 16:50:14 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
	: _size(0)
{
}

Span::Span(size_t size)
	: _size(size)
{
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::~Span(void)
{
}

const char	*Span::SpanIsFullException::what(void) const throw()
{
	return ("Span is full!");
}

const char	*Span::ElementsTooFewException::what(void) const throw()
{
	return ("Elements are too few!");
}

void	Span::addNumber(int value)
{
	if (this->_elements.size() == this->_size)
		throw SpanIsFullException();
	this->_elements.insert(value);
}

size_t	Span::shortestSpan(void) const
{
	if (this->_elements.size() < 2)
		throw ElementsTooFewException();
	size_t diff = SIZE_T_MAX;
	std::multiset<int>::iterator pre_it =  this->_elements.begin();
	std::multiset<int>::iterator it = pre_it;
	it++;
	for(; it != this->_elements.end(); it++)
	{
		if (static_cast<size_t>(*it - *pre_it) < diff)
			diff = *it - *pre_it;
		pre_it = it;
	}
	return (diff);
}

size_t	Span::longestSpan(void)	const
{
	if (this->_elements.size() < 2)
		throw ElementsTooFewException();
	int	max = *std::max_element(this->_elements.begin(), this->_elements.end());
	int	min = *std::min_element(this->_elements.begin(), this->_elements.end());

	return (max - min);
}

Span	&Span::operator=(const Span &src)
{
	if (this == &src)
		return (*this);
	this->_size = src._size;
	this->_elements.clear();
	this->_elements = src._elements;
	return (*this);
}
