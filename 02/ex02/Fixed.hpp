/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:06:06 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/22 21:25:16 by jaehyuki         ###   ########.fr       */
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
		Fixed(Fixed const &fixed);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed();

		float	toFloat(void) const;
		int		toInt(void) const;
		/* Getter and Setter */
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		/* Operator Overloads */
		Fixed	&operator=(Fixed const &copy);
		bool	operator>(Fixed fixed) const;
		bool	operator<(Fixed fixed) const;
		bool	operator>=(Fixed fixed) const;
		bool	operator<=(Fixed fixed) const;
		bool	operator==(Fixed fixed) const;
		bool	operator!=(Fixed fixed) const;
		
		float	operator+(Fixed fixed) const;
		float	operator-(Fixed fixed) const;
		float	operator*(Fixed fixed) const;
		float	operator/(Fixed fixed) const;

		Fixed	operator++();
		Fixed	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		static Fixed	&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
		static Fixed	&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<(std::ostream &outstream, Fixed const &fixed);
//>> << 입출력 연산자 오버로딩은 멤버 함수로는 구현할 수 없고 전역 함수로만 구현할 수 있다.
//Six comparison operators: >, <, >=, <=, == and !=.
//Four arithmetic operators: +, -, *, and /.

#endif
