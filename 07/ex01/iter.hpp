/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:15:08 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/08 21:02:43 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <cctype>
#include <iostream>

template <typename T>
void	iter(T *arr, size_t size, void (*f)(const T&))
{
	if (!arr || !size || !f)
		return ;
	for (size_t i = 0; i < size; i++)
	{
		f(arr[i]);
	}
}

template <typename T>
void	iter(T *arr, size_t size, void (*f)(T&))
{
	if (!arr || !size || !f)
		return ;
	for (size_t i = 0; i < size; i++)
	{
		f(arr[i]);
	}
}
