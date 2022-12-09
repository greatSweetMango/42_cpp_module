/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:15:08 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/07 18:36:56 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
template <typename T>
void	swap(T &a, T &b)
{
	T	tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(T &a, T &b)
{
	return ( a < b ? a : b );
}

template <typename T>
T	max(T &a, T &b)
{
	return ( a > b ? a : b);
}
