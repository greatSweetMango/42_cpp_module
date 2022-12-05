/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:06:02 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/05 19:57:45 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Serializer	ser;
	uintptr_t	uintPtr;
	Data		data;
	Data		*ptr;

	data.name = "Tom";
	data.grade = 'A';
	data.semester = 9;

	std::cout << "name: " << data.name << std::endl;
	std::cout << "grade: " << data.grade << std::endl;
	std::cout << "semester: " << data.semester << std::endl;
	std::cout << "ptr_addresss: " << &data << std::endl;

	uintPtr = ser.serialize(&data);

	std::cout << "\nuintptr_t: " << uintPtr << std::endl;

	ptr = ser.deserialize(uintPtr);
	
	std::cout << "name: " << ptr->name << std::endl;
	std::cout << "grade: " << ptr->grade << std::endl;
	std::cout << "semester: " << ptr->semester << std::endl;
	std::cout << "ptr_addresss: " << ptr << std::endl;	
	return (0);
}
