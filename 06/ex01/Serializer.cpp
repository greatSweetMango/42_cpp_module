/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:16:29 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/05 19:56:33 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
}

Serializer::Serializer(const Serializer &copy)
{
	*this = copy;
}

Serializer::~Serializer(void)
{
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

Serializer	&Serializer::operator=(const Serializer &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}
