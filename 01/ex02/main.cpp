/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:11:06 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/16 21:19:26 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "address(str)      : " << &str << std::endl;
	std::cout << "address(stringPTR): " << stringPTR << std::endl;
	std::cout << "address(stringREF): " << &stringREF << std::endl;

	std::cout << "data(str)      : " << str << std::endl;
	std::cout << "data(stringPTR): " << *stringPTR << std::endl;
	std::cout << "data(stringREF): " << stringREF << std::endl;

	return (0);
}
