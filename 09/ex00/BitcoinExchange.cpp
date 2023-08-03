/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:57:39 by jaehyuki          #+#    #+#             */
/*   Updated: 2023/04/19 12:13:41 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(std::string filePath)
{
    std::string     line = "";
    bool            firstLine = true;
    std::ifstream   infile(filePath);
    
    if (infile.fail())
		throw ReadFailException();

    while (std::getline(infile, line))
    {
        size_t  pos = line.find(',');
        if (pos == std::string::npos)
            throw FormException();
        std::string date = line.substr(0, pos);
        std::string exchangeRateStr = line.substr(pos + 1, line.length());

        if (firstLine)
        {
            if (date != "date" || exchangeRateStr != "exchange_rate")
                throw FormException();
            firstLine = false;
            continue;
        }
        if (!isDateValid(date))
            throw DateValidFailException();
        if (!isFloatVaild(exchangeRateStr))
            throw ExchangeRateValidFailException();
  
        double exchangeRate = atof(exchangeRateStr.c_str());
        if (exchangeRate < 0 || exchangeRate == HUGE_VAL)
            throw ExchangeRateValidFailException();
            
        if (!(_m_db.insert(std::make_pair(date, exchangeRate)).second))
            throw FormException();
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
    *this = src;
}

BitcoinExchange::~BitcoinExchange(void)
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
    if (this == &src)
		return (*this);
	return (*this);
}

double    BitcoinExchange::exchangeCoin(std::string dateString, double coin)
{
    std::map<std::string, double>::iterator it = _m_db.upper_bound(dateString);
    if (it == _m_db.begin())
        return (-1);
    else
        it--;
    return (it->second * coin);
}

bool    BitcoinExchange::isDateValid(std::string dateString)
{
    //YYYY-MM-DD
    const char  *str = dateString.c_str();

    if (std::strlen(str) != std::strlen("YYYY-MM-DD"))
        return (false);
        
    for (int i = 0; str[i]; i++)
    {
        if ((i == 4 || i == 7) && str[i] != '-')
            return (false);
        else
            continue;
        if (!std::isdigit(str[i]))
            return (false);
    }
    int year = atoi(dateString.substr(0, 4).c_str());
    int month = atoi(dateString.substr(5, 2).c_str());
    int day = atoi(dateString.substr(8, 2).c_str());

    if (year < 0 || year > 9999)
        return (false);
    if (month < 1 || month > 12)
        return (false);
    if (day < 1 || day > 31)
        return (false);
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30) {
            return (false);
        }
    }
    if (month == 2) {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            if (day > 29) {
                return (false);
            }
        } else {
            if (day > 28) {
                return (false);
            }
        }
    }
    return (true);
}

bool    BitcoinExchange::isFloatVaild(std::string floatString)
{
    bool    pointFlag = false;

    size_t i = 0;
    while (i < floatString.length())
    {
        char    ch = floatString[i];

        if (isdigit(ch))
        {
        }
        else if (ch == '.')
        {
            if (pointFlag == false)
                pointFlag = true;
            else
                return (false);
        }
        else if (ch == '+' || ch == '-')
        {
            if (i != 0)
                return (false);
        }
        else
            return (false);
        i++;
    }
    return (true);
}
const char	*BitcoinExchange::ReadFailException::what(void) const throw()
{
	return ("Error: could not open file.");
}

const char *BitcoinExchange::FormException::what(void) const throw()
{
    return ("Error: Data form is wrong!");
}

const char *BitcoinExchange::DateValidFailException::what(void) const throw()
{
    return ("Error: Date is not Vaild!");
}

const char *BitcoinExchange::ExchangeRateValidFailException::what(void) const throw()
{
    return ("Error: Exchange Rate is not Vaild!");
}
