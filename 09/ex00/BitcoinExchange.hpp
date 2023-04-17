/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:57:42 by jaehyuki          #+#    #+#             */
/*   Updated: 2023/04/17 17:19:42 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>

class BitcoinExchange {
    private:
        std::map<std::string, double>  _m_db;

    public:
        BitcoinExchange();
        BitcoinExchange(std::string filePath);
        BitcoinExchange(const BitcoinExchange &src);
        ~BitcoinExchange();
        /* Operator overloads */
		BitcoinExchange	&operator=(const BitcoinExchange &src);
        
        /* Functions */
        double  exchangeCoin(std::string dateString, double coin);
        
        bool    isDateValid(std::string dateString);
        bool    isFloatVaild(std::string floatString);
        /* Exeption Class */
		class   ReadFailException : public std::exception
		{
			public:
				const char *what() const throw();
		};
        class   FormException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class   DateValidFailException : public std::exception
        {
            public:
                const char *what() const throw();
        };

        class   ExchangeRateValidFailException : public std::exception
        {
            public:
                const char *what() const throw();
        };
};
