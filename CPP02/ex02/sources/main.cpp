/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 07:07:08 by le                #+#    #+#             */
/*   Updated: 2023/09/08 01:28:59 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

// int main(void) {
//     Fixed a(42.42f);
//     Fixed b(21.21f);

//     std::cout << "a is " << a << std::endl;
//     std::cout << "b is " << b << std::endl;
//     std::cout << "a + b is " << a + b << std::endl;
//     std::cout << "a - b is " << a - b << std::endl;
//     std::cout << "a * b is " << a * b << std::endl;
//     std::cout << "a / b is " << a / b << std::endl;
//     std::cout << "a > b is " << (a > b) << std::endl;
//     std::cout << "a < b is " << (a < b) << std::endl;
//     std::cout << "a >= b is " << (a >= b) << std::endl;
//     std::cout << "a <= b is " << (a <= b) << std::endl;
//     std::cout << "a == b is " << (a == b) << std::endl;
//     std::cout << "a != b is " << (a != b) << std::endl;

//     Fixed c(a);
//     std::cout << "c is " << c << std::endl;
//     c.setRawBits(1234);
//     std::cout << "c is now " << c << std::endl;
    
//     Fixed const d(123.456f);
//     std::cout << "d is " << d << std::endl;
//     std::cout << "d to int is " << d.toInt() << std::endl;
//     std::cout << "d to float is " << d.toFloat() << std::endl;

//     std::cout << "a++ is " << a++ << std::endl;
//     std::cout << "a is now " << a << std::endl;
//     std::cout << "++a is " << ++a << std::endl;
//     std::cout << "a is now " << a << std::endl;
//     std::cout << "c-- is " << c-- << std::endl;
//     std::cout << "c is now " << c << std::endl;
//     std::cout << "--c is " << --c << std::endl;
//     std::cout << "c is now " << c << std::endl;

//     std::cout    << "a : " << a 
//                 << " | b : " << b 
//                 << " | c : " << c 
//                 << " | d : " << d
//                 << std::endl;
//     std::cout << "min(a, b) is " << Fixed::min(a, b) << std::endl;
//     std::cout << "min(d, b) is " << Fixed::min(d, b) << std::endl;
//     std::cout << "max(a, b) is " << Fixed::max(a, b) << std::endl;
//     std::cout << "max(d, b) is " << Fixed::max(d, b) << std::endl;

//     Fixed e = a + b;

//     std::cout << "e (a+b) is " << e << std::endl;

//     return 0;
// }



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