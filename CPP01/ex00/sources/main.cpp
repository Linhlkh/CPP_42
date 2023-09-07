/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 03:32:23 by khle              #+#    #+#             */
/*   Updated: 2023/09/06 17:47:28 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main()
{
	Zombie *s;
	s = newZombie("Sandwich");
	s->announce();
	delete(s);
	randomChump("Noodle");
	Zombie a("Burger");
	a.announce();
}