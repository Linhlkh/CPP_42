/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:03:45 by le                #+#    #+#             */
/*   Updated: 2023/09/05 15:50:00 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "A WrongCat created." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "A WrongCat destroyed." << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
    std::cout << "Copy constructor for WrongCat called." << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat: Meow meow" << std::endl;
}
