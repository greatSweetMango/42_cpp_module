/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:07:48 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/17 18:15:15 by jaehyuki         ###   ########.fr       */
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

	char			buf[BUF_SIZE];
	std::string		str = "";
	std::ifstream	infile(av[1]);
	
	if (infile.fail())
	{
		std::cout << "No such file or directory!" << std::endl;
		return (1);
	}
	while (!infile.eof())
	{
		memset(buf, 0, BUF_SIZE);
		infile.read(buf, BUF_SIZE);
		str.append(buf);
	}

	return (replace(str, av));
	std::cout << str << std::endl;
}
