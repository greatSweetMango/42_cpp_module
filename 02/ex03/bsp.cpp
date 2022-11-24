/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:22:17 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/24 19:05:13 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	alpha;
	Fixed	beta;

	alpha = (point.get_x() * (c.get_y() - a.get_y()) - point.get_y() * (c.get_x() - a.get_x())) \
			/ ((b.get_x() - a.get_x()) * (c.get_y() - a.get_y()) - (c.get_x() - a.get_x()) * (b.get_y() - a.get_y()));
	beta = (point.get_y() * (b.get_x() - a.get_x()) - point.get_x() * (b.get_y() - a.get_y())) \
			/ ((b.get_x() - a.get_x()) * (c.get_y() - a.get_y()) - (c.get_x() - a.get_x()) * (b.get_y() - a.get_y()));
			
	Fixed	a_b(alpha + beta);
	if ((alpha > 0 && alpha < 1) && (beta > 0 && beta < 1) && a_b < 1)
		return (true);
	else
		return (false);
}
// vector determinant
