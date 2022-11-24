/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:14:50 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/24 19:46:55 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0))
{
}

Point::Point(float x, float y) : _x(Fixed(x)), _y(Fixed(y))
{
}

Point::Point(Point const &point) : _x(point.get_x()), _y(point.get_y())
{
}

Point::~Point(void)
{
}

Point	&Point::operator=(Point const &copy)
{
	if (this == &copy)
		return (*this);
	return (*this);
}

const Fixed	&Point::get_x(void) const
{
	return (this->_x);
}

const Fixed	&Point::get_y(void) const
{
	return (this->_y);
}
