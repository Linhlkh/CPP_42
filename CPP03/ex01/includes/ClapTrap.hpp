/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:16:55 by le                #+#    #+#             */
/*   Updated: 2023/09/08 19:10:58 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int hit_point;
        unsigned int energy_point;
        unsigned int attack_damage;
    public:

    //constructor
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& copy);
        ~ClapTrap();
        
    // overloaded operator
        ClapTrap &operator=(const ClapTrap &src);

    //getter, setter    
        void    setname(std::string name);
        void    sethit_point(unsigned int hitPoint);
        void    setenergy_point(unsigned int energyPoint);
        void    setattack_point(unsigned int attDamage);

        std::string getname(void) const;
        unsigned int         gethit_point(void) const;
        unsigned int         getenergy_point(void) const;
        unsigned int         getattack_point(void) const;

    //action
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif