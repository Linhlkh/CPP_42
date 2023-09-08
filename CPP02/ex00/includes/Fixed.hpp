/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:17:37 by le                #+#    #+#             */
/*   Updated: 2023/09/07 23:13:57 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
    private:
        int     fixed_point_num;
        static const int    frac;
    public:
        Fixed();
        Fixed(const Fixed& origin);
        ~Fixed();
        Fixed& operator=(const Fixed& copy);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif
