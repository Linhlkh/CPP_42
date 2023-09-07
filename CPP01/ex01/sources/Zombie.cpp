/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 02:05:46 by khle              #+#    #+#             */
/*   Updated: 2023/09/06 18:20:53 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie()
{
	this->name = "Random";
	std::cout << "Random zombie has creadted" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie " << this->name << " has creadted" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " has destroyed" << std::endl;
}

void	Zombie::setname(std::string name)
{
	this->name = name;
}

std::string Zombie::getname()
{
	return(this->name);
}

void	Zombie::announce() const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}
