/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:04:30 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/08 20:57:43 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void)
	: std::stack<T>()
{

}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy)
{
	*this = copy;
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{

}

template <typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::begin(void) const
{
	return (this->c.begine());
}

template <typename T>
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::rbegin(void)
{
	return (this->c.rbegin());
}

template <typename T>
typename std::stack<T>::container_type::const_reverse_iterator	MutantStack<T>::rbegin(void) const
{
	return (this->c.rbegin());
}

template <typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::end(void)
{
	return (this->c.end());
}

template <typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::end(void) const
{
	return (this->c.end());
}

template <typename T>
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::rend(void)
{
	return (this->c.rend());
}

template <typename T>
typename std::stack<T>::container_type::const_reverse_iterator	MutantStack<T>::rend(void) const
{
	return (this->c.rend());
}

template <typename T>
void	MutantStack<T>::push_back(T value)
{
	this->push(value);
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}
