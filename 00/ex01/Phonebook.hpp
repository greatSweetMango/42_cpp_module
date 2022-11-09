/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:08:20 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/09 21:13:37 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
 #define PHONEBOOK_HPP

class	Phonebook {
	private :
		Contact	_contacts;
		int		_index;
	pubilc :
		Phonebook();
		~Phonebook();
		cmd_add(void);
		cmd_search(void);
		cmd_exit(void);
}
#endif
//은 커맨드를 입력할 수 있어야 합니다: ADD, SEARCH, EXIT 커맨드를 허용하세요.