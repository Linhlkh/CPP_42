/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:16:51 by le                #+#    #+#             */
/*   Updated: 2023/09/05 15:43:42 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

//Constructor

ClapTrap::ClapTrap() : hit_point(10), energy_point(10), attack_damage(0)
{
    std::cout << "ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :  name(name), hit_point(10), energy_point(10), attack_damage(0)
{
    std::cout << "ClapTrap " << this->getname() << " created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

// overloaded operator
ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    this->setname(src.getname());
    this->sethit_point(src.gethit_point());
    this->setenergy_point(src.getenergy_point());
    this->setattack_point(src.getattack_point());
	return *this;
}

// Getter, setter

void    ClapTrap::setname(std::string name)
{
	this->name = name;
}

void    ClapTrap::sethit_point(unsigned int hitPoint)
{
	this->hit_point = hitPoint;
}

void    ClapTrap::setenergy_point(unsigned int energyPoint)
{
	this->energy_point = energyPoint;
}
void    ClapTrap::setattack_point(unsigned int attDamage)
{
	this->attack_damage = attDamage;
}

std::string ClapTrap::getname() const
{
	return (this->name);
}

unsigned int	ClapTrap::gethit_point(void) const
{
	return (this->hit_point);
}

unsigned int	ClapTrap::getenergy_point(void) const
{
	return (this->energy_point);
}

unsigned int	ClapTrap::getattack_point(void) const
{
	return (this->attack_damage);
}

//action
void    ClapTrap::attack(const std::string& target)
{
	if (this->getenergy_point() == 0)
	{
		std::cout << this->getname() << " doesn't have enough energy to attack"
		<< std::endl;
	}
	else if (this->gethit_point() == 0)
	{
		std::cout << this->getname() << " doesn't have enough hit point to attack"
		<< std::endl;
	}
	else
	{
		std::cout << this->getname() << " attack " << target
		<< " causing " << this->getattack_point() << " point of damage!" << std::endl;
		this->setenergy_point(this->getenergy_point() - 1);
	}
}
void    ClapTrap::takeDamage(unsigned int amount)
{
	if (this->gethit_point() >= amount)
	{
		this->sethit_point(this->gethit_point() - amount);
	}
	else if (this->gethit_point() > 0)
	{
		this->sethit_point(0);
	}
	else
	{
		std::cout << this->getname() << " is already dead, cannot take any damage." << std::endl;
		return ;
	}
	std::cout << this->getname() << " was attacked and lost "
	<< amount << " hit point, " << this->gethit_point() << " hit point left."
	<<std::endl;
}
void    ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getenergy_point() == 0)
		std::cout << this->name << " doesn't have enough energy to repair itself"
		<< std::endl;
	else if (this -> gethit_point() == 0)
		std::cout << this->name << " doesn't have enough hit point to repair itself"
		<< std::endl;
	else if (this->gethit_point() + amount <= 10)
	{
		this->sethit_point(this->gethit_point() + amount);
		std::cout << this->name << " repaired itself and has " << this->hit_point
		<< " hit point now" << std::endl;
		this->setenergy_point(this->getenergy_point() - 1);
	}
	else
	{
		this->sethit_point(10);
		std::cout << this->name << " repaired itself and has " << this->hit_point
		<< " hit point now" << std::endl;
		this->setenergy_point(this->getenergy_point() - 1);
	}
}

