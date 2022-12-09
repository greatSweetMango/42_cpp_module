/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:15:15 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/07 20:21:17 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
	: _size(0)
{
	std::cout << "Array: Default constructor called" << std::endl;
	this->_arr = new T[this->_size];
}

template <typename T>
Array<T>::Array(size_t size)
{
	std::cout << "Array: constructor called" << std::endl;
	if (size == 0)
		this->_size = 1;
	else
		this->_size = size;
	this->_arr = new T[size];
}

template <typename T>
Array<T>::Array(const Array<T> &copy)
{
	std::cout << "Array: copy constructor called" << std::endl;
	this->_arr = NULL;
	this->_size = 0;
	*this = copy;
}

template <typename T>
Array<T>::~Array(void)
{
	std::cout << "Array: Destructor called" << std::endl;
	if (this->_arr)
		delete []this->_arr;
}

/* Member functions */
template <typename T>
size_t	Array<T>::size(void) const
{
	return (this->_size);
}

/* Exception class */
template <typename T>
const char	*Array<T>::OutOfArrayException::what() const throw()
{
	return ("Accessed invaild index!");
}

/* Operator overloads */
template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &src)
{
	if (this == &src)
		return (*this);
	if (this->_arr)
		delete []this->_arr;
	this->_size = src._size;
	this->_arr = new T[src._size];
	*this->_arr = *src._arr;
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](size_t index)
{
	if ((this->_size && this->_size <= index) || this->_arr == NULL)
		throw Array<T>::OutOfArrayException();
	return (this->_arr[index]);
}
