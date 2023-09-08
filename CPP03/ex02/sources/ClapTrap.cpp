/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:16:51 by le                #+#    #+#             */
/*   Updated: 2023/09/08 19:14:27 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

//Constructor

ClapTrap::ClapTrap() : name("Random"), hit_point(10), energy_point(10), attack_damage(0)
{
    std::cout << "Random ClapTrap has been created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :  name(name), hit_point(10), energy_point(10), attack_damage(0)
{
    std::cout << "ClapTrap " << this->name << " has been created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " has been destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

// overloaded operator
ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	this->name = src.name;
    this->hit_point = src.hit_point;
    this->energy_point = src.energy_point;
    this->attack_damage = src.attack_damage;
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
	if (this->energy_point == 0)
	{
		std::cout << this->name << " doesn't have enough energy to attack"
		<< std::endl;
	}
	else if (this->hit_point == 0)
	{
		std::cout << this->name << " doesn't have enough hit point to attack"
		<< std::endl;
	}
	else
	{
		std::cout << this->name << " attack " << target
		<< " causing " << this->attack_damage << " point of damage!" << std::endl;
		this->setenergy_point(this->getenergy_point() - 1);
	}
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_point >= amount)
	{
		this->sethit_point(this->gethit_point() - amount);
	}
	else if (this->hit_point > 0)
	{
		this->sethit_point(0);
	}
	else
	{
		std::cout << this->name << " is already dead, cannot take any damage." << std::endl;
		return ;
	}
	std::cout << this->name << " was attacked and lost "
	<< amount << " hit point, " << this->hit_point << " hit point left."
	<<std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_point == 0)
		std::cout << this->name << " doesn't have enough energy to repair itself"
		<< std::endl;
	else if (this -> hit_point == 0)
		std::cout << this->name << " doesn't have enough hit point to repair itself"
		<< std::endl;
	else if (this->hit_point + amount <= 10)
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

