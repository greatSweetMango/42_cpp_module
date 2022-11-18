/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:06:06 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/18 19:06:28 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_value;
		static const int	_bit = 8;
	public:
		Fixed();
		Fixed(Fixed &fixed);
		~Fixed();
		Fixed	&operator=(Fixed const &copy);
		
		/* Getter and Setter */
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};

#endif
