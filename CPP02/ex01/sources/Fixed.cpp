/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 05:02:05 by le                #+#    #+#             */
/*   Updated: 2023/09/07 18:00:50 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"


Fixed::Fixed(): fixed_point_num(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const& origin)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = origin;
}

Fixed   &Fixed::operator=(Fixed const& copy)
{
    std::cout << "Copy assignment operator  called" << std::endl;
    this->fixed_point_num = copy.getRawBits();
    return (*this);
}

int Fixed::getRawBits() const
{
    return (this->fixed_point_num);
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point_num = raw;
}

Fixed::Fixed(const int i): fixed_point_num(i * 256)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float x): fixed_point_num(roundf(x * 256))
{
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat() const
{
    return ((float)this->fixed_point_num / 256);
}

int Fixed::toInt() const
{
    return (roundf(this->fixed_point_num / 256));
}

std::ostream	&operator<<(std::ostream& str, Fixed const& nbr)
{
	str << nbr.toFloat();
	return str;
}
