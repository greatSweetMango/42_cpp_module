/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:10:10 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/24 18:48:36 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	//std::cout << "Fixed: Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(Fixed const &src)
{
	//std::cout << "Fixed: Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const value)
{
	this->_value = value << this->_bit;
}

Fixed::Fixed(float const value)
{
	this->_value = roundf(value * (1 << this->_bit));
}

Fixed::~Fixed(void)
{
	//std::cout << "Fixed: Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	//std::cout << "Fixed getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->getRawBits() / (float)(1 << this->_bit));
}

int		Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->_bit);
}

std::ostream	&operator<<(std::ostream &outstream, Fixed const &fixed)
{
	return (outstream << fixed.toFloat());
}

Fixed	&Fixed::operator=(Fixed const &copy)
{
	//std::cout << "Fixed: Assignation operator called" << std::endl;
	this->_value = copy.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed fixed) const
{
	if (this->_value > fixed._value)
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed fixed) const
{
	if (this->_value < fixed._value)
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed fixed) const
{
	if (this->_value >= fixed._value)
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed fixed) const
{
	if (this->_value <= fixed._value)
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed fixed) const
{
	if (this->_value == fixed._value)
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed fixed) const
{
	if (this->_value != fixed._value)
		return (true);
	return (false);
}

float	Fixed::operator+(Fixed fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

float	Fixed::operator-(Fixed fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

float	Fixed::operator*(Fixed fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

float	Fixed::operator/(Fixed fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed	Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	fixed = *this;
	this->_value++;
	return (fixed);
}

Fixed	Fixed::operator--(int)
{
	Fixed	fixed = *this;
	this->_value--;
	return (fixed);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() >= b.toFloat())
		return (a);
	else
		return (b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() <= b.toFloat())
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() >= b.toFloat())
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() <= b.toFloat())
		return (a);
	else
		return (b);
}
