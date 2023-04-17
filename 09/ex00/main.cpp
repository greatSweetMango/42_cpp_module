/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:55:20 by jaehyuki          #+#    #+#             */
/*   Updated: 2023/04/17 19:08:46 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cout << "Error: could not open file." << std::endl;
    try {
        std::string     line = "";
        bool            firstLine = true;
        BitcoinExchange bitcoinDB("./data.csv");
        std::ifstream   infile(argv[1]);
        
        if (infile.fail())
		    throw BitcoinExchange::ReadFailException();

        while (std::getline(infile, line))
        {
            size_t  pos = line.find(" | ");
            if (pos == std::string::npos)
            {
                std::cout << "Error: bad input => " << line << std::endl;
                continue;
            }
            std::string date = line.substr(0, pos);
            std::string valueStr = line.substr(pos + 3, line.length());
    
            if (firstLine)
            {
                if (date != "date" || valueStr != "value")
                    throw BitcoinExchange::FormException();
                firstLine = false;
                continue;
            }
            if (!bitcoinDB.isDateValid(date))
            {
                std::cout << "Error: bad input => " << line << std::endl;
                continue;
            }
            if (!bitcoinDB.isFloatVaild(valueStr))
            {
                std::cout << "Error: bad input => " << line << std::endl;
                continue;
            }   
            double value = atof(valueStr.c_str());
            if (value < 0)
            {
                std::cout << "Error: not a positive number." << std::endl;
                continue;
            }
            if (value > 2147483647)
            {
                std::cout << "Error: too large a number." << std::endl;
                continue;
            }
            double exchanged_value = bitcoinDB.exchangeCoin(date, value);
            if (exchanged_value < 0)
                std::cout << "Error: Can't find Exchanged Rate!" << std::endl;
            else
            {
                std::cout << date << " => "\
                    << value\
                    << " = "\
                    << exchanged_value\
                    << std::endl;
            }
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
