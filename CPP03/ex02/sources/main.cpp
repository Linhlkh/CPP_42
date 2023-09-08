/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:16:59 by le                #+#    #+#             */
/*   Updated: 2023/09/08 19:18:36 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

int main()
{
    FragTrap Aa("Hamburger");
    std::cout<<Aa << std::endl << std::endl;
    Aa.attack("Noodle");
    std::cout<<Aa << std::endl << std::endl;
    Aa.takeDamage(10);
    std::cout<<Aa << std::endl << std::endl;
    Aa.highFivesGuy();
    std::cout<<Aa << std::endl << std::endl;

    FragTrap Bb(Aa);
    std::cout<< "Bb copied from Aa: " << Bb << std::endl;   
}