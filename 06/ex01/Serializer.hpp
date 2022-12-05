/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:03:18 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/05 21:16:23 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cstdint>

typedef struct Data
{
	std::string	name;
	char		grade;
	size_t		semester;
}	Data;

class Serializer
{
	public:
		Serializer();
		Serializer(const Serializer &copy);
		~Serializer();

		/* Member fucntions */
		uintptr_t	serialize(Data* ptr);
		Data		*deserialize(uintptr_t raw);

		/* Operator overloads */
		Serializer	&operator=(const Serializer &src);
};
