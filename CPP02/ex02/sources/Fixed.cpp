/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 05:02:05 by le                #+#    #+#             */
/*   Updated: 2023/09/08 01:04:30 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"


Fixed::Fixed(): fixed_point_num(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const& origin)
{
    *this = origin;
}

Fixed   &Fixed::operator=(Fixed const& copy)
{
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
}

Fixed::Fixed(const float x): fixed_point_num(roundf(x * 256))
{
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

// ex02

//arithmetic operator

Fixed Fixed::operator+(Fixed const& nf) const
{
    Fixed temp(this->toFloat() + nf.toFloat());
    return temp;
}

Fixed Fixed::operator-(Fixed const& nf) const
{
    Fixed temp(this->toFloat() - nf.toFloat());
    return temp;
}

Fixed Fixed::operator*(Fixed const& nf) const
{
    Fixed temp(this->toFloat() * nf.toFloat());
    return temp;
}

Fixed Fixed::operator/(Fixed const& nf) const
{
    Fixed temp(this->toFloat() / nf.toFloat());
    return temp;
}

//comparison operator

bool Fixed::operator>(Fixed const& nf) const
{
    return (this->toFloat() > nf.toFloat());
}

bool Fixed::operator<(Fixed const& nf) const
{
    return (this->toFloat() < nf.toFloat());
}

bool Fixed::operator>=(Fixed const& nf) const
{
    return (this->toFloat() >= nf.toFloat());
}

bool Fixed::operator<=(Fixed const& nf) const
{
    return (this->toFloat() <= nf.toFloat());
}

bool Fixed::operator==(Fixed const& nf) const
{
    return (this->toFloat() == nf.toFloat());
}

bool Fixed::operator!=(Fixed const& nf) const
{
    return (this->toFloat() != nf.toFloat());
}

// increment/decrement
Fixed& Fixed::operator++()
{
    this->setRawBits((this->getRawBits()) + 1);
    return (*this);
}

Fixed& Fixed::operator--()
{
    this->setRawBits((this->getRawBits()) - 1);
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed copy(*this);
    this->setRawBits((this->getRawBits()) + 1);
    return (copy);
}

Fixed Fixed::operator--(int)
{
    Fixed copy(*this);
    this->setRawBits((this->getRawBits()) - 1);
    return (copy);
}

//min, max

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a < b? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a < b? b : a);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a < b? b : a);
}