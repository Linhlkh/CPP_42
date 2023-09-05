/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:16:59 by le                #+#    #+#             */
/*   Updated: 2023/09/05 15:43:57 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

int main()
{
    FragTrap Aa("Hamburger");
    std::cout<<Aa << std::endl;
    Aa.attack("Noodle");
    std::cout<<Aa << std::endl;
    Aa.takeDamage(10);
    std::cout<<Aa << std::endl;
    Aa.highFivesGuy();
    std::cout<<Aa << std::endl << std::endl;

    FragTrap Bb(Aa);
    std::cout<< "Bb copied from Aa: " << Bb << std::endl;   
}