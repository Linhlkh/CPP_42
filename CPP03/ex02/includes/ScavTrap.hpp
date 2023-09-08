/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 18:00:21 by le                #+#    #+#             */
/*   Updated: 2023/09/08 19:01:46 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string s_name);
        ScavTrap(const ScavTrap& copy);
        ~ScavTrap();

        ScavTrap &operator=(const ScavTrap &src);

        void attack(const std::string& target);
        void guardGate(void);
};

std::ostream&	operator<<(std::ostream &o, ScavTrap const &i);

#endif