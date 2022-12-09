/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:22:43 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/06 17:36:29 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

typedef struct student
{
	std::string name;
}	student;

class A
{
	public:
		int	num;
};

void	setName(student &s)
{
	s.name = s.name = "tom";
}

void	setNum0(A &a)
{
	a.num = 0;
}

void	setNum10(A &a)
{
	a.num = 10;
}

void	ft_toUpper(char	&c)
{
	c = std::toupper(c);
}

int	main(void)
{
	A *a = new A[10];	
	::iter(a, 10, &setNum0);
	for (int i = 0; i < 10; i++)
		std::cout << a[i].num << " ";
	std::cout << std::endl;
	::iter(a, 10, &setNum10);
	for (int i = 0; i < 10; i++)
		std::cout << a[i].num << " ";
	std::cout << std::endl;
	delete []a;

	student s[5];
	std::cout << "<-------------------------------------->" << std::endl;
	::iter(s, 5, &setName);
	for (int i = 0; i < 5; i++)
		std::cout << s[i].name << " ";;
	std::cout << std::endl;	
	std::cout << "<-------------------------------------->" << std::endl;
	
	std::string str = "abcdef";
	::iter(&str[0], str.length(), &ft_toUpper);
	std::cout << str << std::endl;
	return 0;
}
