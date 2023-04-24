/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:39:10 by jaehyuki          #+#    #+#             */
/*   Updated: 2023/04/24 16:56:36 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>

class   PmergeMe
{
    private:
        std::vector<int>    _m_vector;
        //double              _m_vectorTime;
        std::list<int>      _m_list;
        //double              _m_listTime;

        bool    _M_isValid(char **argv);
        void    _M_vectorInsertSort(std::vector &vec);
        void    _M_listInsertSort(std::list<int> &lst);
    public:
        PmergeMe();
        PmergeMe(char **argv);
        PmergeMe(const PmergeMe &src);
        ~PmergeMe();
        PmergeMe &operator=(const PmergeMe &src);

        void    sortVector();
        void    sortList();
        void    checkIsSorted();
        void    printResult();
        class   InputValidException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};
