/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 04:59:35 by khle              #+#    #+#             */
/*   Updated: 2023/09/05 17:48:12 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

void	HumanA::attack() const
{
	std::cout << this->name << " attacks with their " << this->weaponA->getType() << std::endl;
}