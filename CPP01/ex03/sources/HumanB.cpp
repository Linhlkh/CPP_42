/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 04:59:57 by khle              #+#    #+#             */
/*   Updated: 2023/09/07 03:23:22 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string nameB)
{
	this->name = nameB;
	this->weaponB = NULL;
}

HumanB::~HumanB()
{
}
void	HumanB::setWeapon(Weapon& weaponB)
{
	this->weaponB = &weaponB;
}


Weapon*	HumanB::getWeapon() const
{
	return (this->weaponB);
}

void	HumanB::attack() const
{
	std::cout << this->name << " attacks with their " << this->weaponB->getType() << std::endl;
}
