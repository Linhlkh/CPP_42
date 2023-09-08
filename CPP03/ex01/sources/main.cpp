/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:16:59 by le                #+#    #+#             */
/*   Updated: 2023/09/08 19:07:30 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main()
{
    ScavTrap Aa("Coconut");
    std::cout<<Aa << std::endl << std::endl;
	
    Aa.attack("Mango");
    std::cout<<Aa << std::endl << std::endl;
	
    Aa.takeDamage(1001);
    std::cout<<Aa << std::endl << std::endl;
    Aa.guardGate();

    ScavTrap Bb(Aa);
    std::cout<< Bb << std::endl;
}