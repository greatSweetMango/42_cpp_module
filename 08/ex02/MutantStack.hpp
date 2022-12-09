/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:57:22 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/09 14:50:35 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <list>
#include <deque>
#include <set>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &copy);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator 		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator 	const_reverse_iterator;
		
		/* Member function */
		typename std::stack<T>::container_type::iterator begin();
		typename std::stack<T>::container_type::const_iterator begin() const;
		typename std::stack<T>::container_type::reverse_iterator rbegin();
		typename std::stack<T>::container_type::const_reverse_iterator rbegin() const;
		typename std::stack<T>::container_type::iterator end();
		typename std::stack<T>::container_type::const_iterator end() const;
		typename std::stack<T>::container_type::reverse_iterator rend();
		typename std::stack<T>::container_type::const_reverse_iterator rend() const;

		void	push_back(T	value);

		/* Operator overloads */
		MutantStack	&operator=(const MutantStack &src);
};

#include "MutantStack.tpp"
