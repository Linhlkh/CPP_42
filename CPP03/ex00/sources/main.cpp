/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 04:16:59 by le                #+#    #+#             */
/*   Updated: 2023/09/05 15:23:38 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main()
{
    ClapTrap Aa("Bob"); //test constructor
    std::cout << Aa.getname() << ": Hit point(" << Aa.gethit_point()
    << "); Energy point(" << Aa.getenergy_point() << "); Attack damage("
    << Aa.getattack_point() << ")" << std::endl;

    //test action
    Aa.setattack_point(2);
    
    Aa.attack("Alice");
    std::cout << Aa.getname() << ": Hit point(" << Aa.gethit_point()
    << "); Energy point(" << Aa.getenergy_point() << "); Attack damage("
    << Aa.getattack_point() << ")" << std::endl;

    Aa.takeDamage(5);
    std::cout << Aa.getname() << ": Hit point(" << Aa.gethit_point()
    << "); Energy point(" << Aa.getenergy_point() << "); Attack damage("
    << Aa.getattack_point() << ")" << std::endl;

    Aa.takeDamage(1);
    std::cout << Aa.getname() << ": Hit point(" << Aa.gethit_point()
    << "); Energy point(" << Aa.getenergy_point() << "); Attack damage("
    << Aa.getattack_point() << ")" << std::endl;

    Aa.beRepaired(2);
    std::cout << Aa.getname() << ": Hit point(" << Aa.gethit_point()
    << "); Energy point(" << Aa.getenergy_point() << "); Attack damage("
    << Aa.getattack_point() << ")" << std::endl;

    //test copy constructor
    ClapTrap Bb(Aa);
    std::cout << Bb.getname() << ": Hit point(" << Bb.gethit_point()
    << "); Energy point(" << Bb.getenergy_point() << "); Attack damage("
    << Bb.getattack_point() << ")" << std::endl;
}