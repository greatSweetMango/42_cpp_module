/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:26:30 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/07 22:38:34 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>

template <typename T>
typename T::iterator easyfind(T &con, int value)
{
	return (std::find(con.begin(), con.end(), value));
}

template <typename K, typename V>
typename std::map<K, V>::iterator easyfind(std::map<K, V> &con, int value)
{
	typename std::map<K, V>::iterator it = con.begin();
	while (it != con.end())
	{
		if (it->second == value)
			return (it);
		it++;
	}
	return (con.end());
}

template <typename K, typename V>
typename std::multimap<K, V>::iterator easyfind(std::multimap<K, V> &con, int value)
{
	typename std::multimap<K, V>::iterator it = con.begin();
	while (it != con.end())
	{
		if (it->second == value)
			return (it);
		it++;
	}
	return (con.end());
}
