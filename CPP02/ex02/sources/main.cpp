/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 07:07:08 by le                #+#    #+#             */
/*   Updated: 2023/09/05 18:11:24 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main( void ) {
	Fixed 		a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

// int	main( void ) 
// {
// 	Fixed a(15);
// 	// int i = 14;
// 	// int c = ++i;
// 	// int d = ++++i;
// 	// std::cout << i << "++i: " << c << "++++i: " << d << std::endl;
// 	// Fixed b(2.5f);

// 	std::cout << a.getRawBits() << std::endl;
// 	// std::cout << b.getRawBits() << std::endl;
// 	// Fixed c;
// 	// c = a + b;
// 	// std::cout << (a <= b) << std::endl;
// 	++a;
// 	std::cout << std::endl << a.getRawBits() << std::endl;
// 	++++++a;
// 	std::cout << std::endl << a.getRawBits() << std::endl;

	
	
// }