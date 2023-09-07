/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 03:32:23 by khle              #+#    #+#             */
/*   Updated: 2023/09/07 05:00:25 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main()
{
	Zombie aa("Bob");
	Zombie *s;
	s = newZombie("Sandwich");
	s->announce();
	delete(s);
	randomChump("Noodle");
}