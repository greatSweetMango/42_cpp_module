/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:08:20 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/18 20:59:11 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
 #define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class	Phonebook {
	private :
		Contact	_contacts[8];
		int		_index;
	public :
		Phonebook();
		~Phonebook();
		void	cmd_add(void);
		void	cmd_search(void);
};
#endif
//은 커맨드를 입력할 수 있어야 합니다: ADD, SEARCH, EXIT 커맨드를 허용하세요.