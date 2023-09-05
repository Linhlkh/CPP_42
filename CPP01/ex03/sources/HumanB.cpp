/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 04:59:57 by khle              #+#    #+#             */
/*   Updated: 2023/09/05 17:48:15 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

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
