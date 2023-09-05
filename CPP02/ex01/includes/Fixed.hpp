/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:17:37 by le                #+#    #+#             */
/*   Updated: 2023/08/10 05:28:34 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int     fixed_point_num;
        static const int    frac = 8;
    public:
        Fixed();
        Fixed(const int i);
        Fixed(const float x);
        Fixed(Fixed const& origin);
        ~Fixed();
        Fixed& operator=(Fixed const& copy);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
		float	toFloat(void) const;
		int 	toInt( void ) const;
};

std::ostream	&operator<<(std::ostream& str, Fixed const &nbr);

#endif
