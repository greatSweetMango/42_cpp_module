/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:22:43 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/12/07 20:23:02 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
	
	try
	{
		Array<int>	integer_arr(10);
		std::cout << "\ninteger_arr_size: " << integer_arr.size() << std::endl;
		Array<int>	tmp(integer_arr);
		
		for (int i = 0; i < 10; i++)
		{
			integer_arr[i] = i;
		}
		for (int i = 0; i < 10; i++)
		{
			std::cout << integer_arr[i] << " ";
		}
		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
		{
			std::cout << tmp[i] << " ";
		}
		std::cout << std::endl;

		Array<double>	double_arr(10);
		std::cout << "\ndouble_arr_size: " << double_arr.size() << std::endl;
				
		for (int i = 0; i < 10; i++)
		{
			double_arr[i] = static_cast<double>(i);
		}
		for (int i = 0; i < 10; i++)
		{
			std::cout << double_arr[i] << " ";
		}
		std::cout << std::endl;

		Array<float>	float_arr(7);
		std::cout << "\nfloat_arr_size: " << float_arr.size() << std::endl;

		std::cout << float_arr[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return 0;
}
