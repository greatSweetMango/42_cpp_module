/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:07:48 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/23 22:40:17 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#define BUF_SIZE 42

int	replace(std::string str, char **av)
{
	size_t			pos;
	std::ofstream	outfile;
	
	outfile.open(std::string(av[1]) + ".replace");
	if (outfile.fail())
	{
		std::cout << "Fail to make outfile" << std::endl;
		return (1);
	}
	pos = 0;
	while (1)
	{
		if (str.find(av[2], pos) == std::string::npos)
			break ;
		else
		{
			pos = str.find(av[2], pos);
			str.erase(pos, std::string(av[2]).size());
			str.insert(pos, av[3]);
			pos += std::string(av[3]).size();
		}
	}
	outfile << str;
	
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Argument Error!!" << std::endl;
		return (1);
	}

	std::string		str = "";
	std::ifstream	infile(av[1]);
	
	if (infile.fail())
	{
		std::cout << "No such file or directory!" << std::endl;
		return (1);
	}
	infile.seekg(0, std::ios::end);
	int fsize = infile.tellg();
	infile.seekg(0, std::ios::beg);
	
	str.resize(fsize);
	infile.read(&str[0], fsize);
	return (replace(str, av));
}
