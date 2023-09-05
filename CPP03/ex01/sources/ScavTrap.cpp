/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 18:00:17 by le                #+#    #+#             */
/*   Updated: 2023/09/05 15:39:38 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string s_name) : ClapTrap(s_name)
{
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap " << this->name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap: Copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    this->setname(src.getname());
    this->sethit_point(src.gethit_point());
    this->setenergy_point(src.getenergy_point());
    this->setattack_point(src.getattack_point());
	return *this;   
}

ScavTrap::~ScavTrap()   
{
    std::cout << "ScavTrap destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energy_point == 0)
	{
		std::cout << "ScavTrap " << this->name << " doesn't have enough energy to attack"
		<< std::endl;
	}
	else if (this->hit_point == 0)
	{
		std::cout << "ScavTrap " << this->name << " doesn't have enough hit point to attack"
		<< std::endl;
	}
	else
	{
		std::cout << "ScavTrap " <<  this->name << " attack " << target
		<< " causing " << this->attack_damage << " point of damage!" << std::endl;
		this->setenergy_point(this->energy_point - 1);
	}
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}

std::ostream&	operator<<(std::ostream &o, ScavTrap const &Aa)
{
    o << "ScavTrap " << Aa.getname() << ": Hit point(" << Aa.gethit_point()
    << "); Energy point(" << Aa.getenergy_point() << "); Attack damage("
    << Aa.getattack_point() << ")" << std::endl;
    return o;
}