/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehyuki <jaehyuki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:48:08 by jaehyuki          #+#    #+#             */
/*   Updated: 2022/11/22 21:29:32 by jaehyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
  Fixed a;
  Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

  std::cout << a << "---a" << std::endl;
  std::cout << ++a << "---a" << std::endl;
  std::cout << a << "---a" << std::endl;
  std::cout << a++ << "---a" << std::endl;
  std::cout << a << "---a" << std::endl;

  std::cout << b << "---b" << std::endl;

  std::cout << Fixed::max( a, b ) << "---max" << std::endl;

  return 0;
}
