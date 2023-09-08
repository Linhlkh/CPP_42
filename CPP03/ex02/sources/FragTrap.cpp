/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:23:06 by le                #+#    #+#             */
/*   Updated: 2023/09/08 19:19:11 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->hit_point = 100;
    this->energy_point = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap " << this->name << " has been created" << std::endl;
}

FragTrap::FragTrap(std::string s_name) : ClapTrap(s_name)
{
    this->hit_point = 100;
    this->energy_point = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap " << this->name << " has been created" << std::endl;
}
FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	this->name = src.name;
    this->hit_point = src.hit_point;
    this->energy_point = src.energy_point;
    this->attack_damage = src.attack_damage;
	return *this;   
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " has been destroyed" << std::endl;
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
