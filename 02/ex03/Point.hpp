/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:08:38 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/24 18:28:14 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;
	public:
		Point(void); //x y = 0
		Point(float x, float y); //float-->Fixed init
		Point(Point const &point);
		~Point(void);

		Point	&operator=(Point const &copy);

		/* Setter and Getter */
		const Fixed &get_x(void) const;
		const Fixed	&get_y(void) const;
	// Fixed();
	// 	Fixed(Fixed const &fixed);
	// 	Fixed(int const value);
	// 	Fixed(float const value);
	// 	~Fixed();

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
