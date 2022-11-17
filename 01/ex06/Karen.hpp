/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:17:59 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/17 18:58:50 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Karen(/* args */);
		~Karen();
		void complain(std::string level);
};

#endif
