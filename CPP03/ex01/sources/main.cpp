/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:16:59 by le                #+#    #+#             */
/*   Updated: 2023/09/05 15:39:28 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main()
{
    ScavTrap Aa("Coconut");
    std::cout<<Aa << std::endl;
    Aa.attack("Mango");
    std::cout<<Aa << std::endl;
    Aa.takeDamage(10);
    std::cout<<Aa << std::endl;
    Aa.guardGate();

    ScavTrap Bb(Aa);
    std::cout<< Bb << std::endl;
}