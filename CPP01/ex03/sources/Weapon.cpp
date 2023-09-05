/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 05:00:11 by khle              #+#    #+#             */
/*   Updated: 2023/09/05 17:48:28 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

void	Weapon::setType(std::string type)
{
	this->type = type;
}

std::string	Weapon::getType() const
{
	return (this->type);
}
