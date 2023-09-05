/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:23:06 by le                #+#    #+#             */
/*   Updated: 2023/09/05 15:43:53 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->hit_point = 100;
    this->energy_point = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap created" << std::endl;
}

FragTrap::FragTrap(std::string s_name) : ClapTrap(s_name)
{
    this->hit_point = 100;
    this->energy_point = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap " << this->name << " created" << std::endl;
}
FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    this->setname(src.getname());
    this->sethit_point(src.gethit_point());
    this->setenergy_point(src.getenergy_point());
    this->setattack_point(src.getattack_point());
	return *this;   
}

FragTrap::~FragTrap()   
{
    std::cout << "FragTrap destroyed" << std::endl;
}

void FragTrap::highFivesGuy()
{
	if (this->energy_point == 0)
	{
		std::cout << "FragTrap " << this->name << " doesn't have enough energy to high five"
		<< std::endl;
	}
	else if (this->hit_point == 0)
	{
		std::cout << "FragTrap " << this->name << " doesn't have enough hit point to high five"
		<< std::endl;
	}
	else
	{
		std::cout << "FragTrap " <<  this->name << " say: High five!" << std::endl;
		this->setenergy_point(this->energy_point - 1);
	}
}

std::ostream&	operator<<(std::ostream &o, FragTrap const &Aa)
{
    o << "FragTrap " << Aa.getname() << ": Hit point(" << Aa.gethit_point()
    << "); Energy point(" << Aa.getenergy_point() << "); Attack damage("
    << Aa.getattack_point() << ")" << std::endl;
    return o;
}
