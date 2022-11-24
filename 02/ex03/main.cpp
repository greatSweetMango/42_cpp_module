/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:46:30 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/24 19:04:12 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int	main(void)
{
	Point	a(0, 0);
	Point	b(0, 2);
	Point	c(2, 0);
	Point	point(2, 0);

	if (bsp(a, b, c, point))
		std::cout << "point is in triangle" << std::endl;
	else
		std::cout << "point is out of triangle" << std::endl;
	return (0);
}
