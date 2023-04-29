/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:39:10 by jaehyuki          #+#    #+#             */
/*   Updated: 2023/04/30 04:46:42 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <sys/time.h>

#define MIN_SIZE 5

class   PmergeMe
{
    private:
        std::vector<int>    _m_vector;
        double              _m_vectorTime;
        std::list<int>      _m_list;
        double              _m_listTime;

        bool    _M_isValid(char **argv);
        
        void    _M_vectorInsertSort(std::vector<int> &vec, int left, int right);
        void    _M_vectorMerge(std::vector<int> &vec, int left, int mid, int right);
        void    _M_vectorMergeSort(std::vector<int> &vec, int left, int right);

        void    _M_listInsertSort(std::list<int> &lst);
        void    _M_listMergeSort(std::list<int> &lst, int left, int right);
    public:
        PmergeMe();
        PmergeMe(char **argv);
        PmergeMe(const PmergeMe &src);
        ~PmergeMe();
        PmergeMe &operator=(const PmergeMe &src);
        
        void    printResult();
        class   InputValidException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};
