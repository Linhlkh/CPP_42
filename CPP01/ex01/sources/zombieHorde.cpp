/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 03:41:31 by khle              #+#    #+#             */
/*   Updated: 2023/09/05 17:47:33 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	zombieHorde(int	N, std::string name)
{
	int	i = -1;
	Zombie* horde = new Zombie[N];
	while (++i < N)
	{
		horde[i].setname(name);
		horde[i].announce();
	}
	return horde;
}