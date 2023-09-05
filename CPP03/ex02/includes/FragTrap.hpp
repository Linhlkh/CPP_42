/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:23:00 by le                #+#    #+#             */
/*   Updated: 2023/08/27 20:42:52 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string s_name);
        FragTrap(const FragTrap& copy);
        ~FragTrap();
        
        FragTrap &operator=(const FragTrap &src);
        
        void highFivesGuy();
};

std::ostream&	operator<<(std::ostream &o, FragTrap const &Aa);

#endif