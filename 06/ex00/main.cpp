/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:16:37 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/05 16:54:08 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) { std::cout << "Argument Error!" << std::endl; return (0); }
	
	Convertor con(argv[1]);

	// con.print2Char();
	// con.print2Int();
	// con.print2Float();
	// con.print2Double();
	con.print2AllType();

	return (0);
}
