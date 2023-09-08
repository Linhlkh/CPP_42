/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:03:45 by le                #+#    #+#             */
/*   Updated: 2023/09/08 21:22:17 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "A WrongCat has been created." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "A WrongCat has been destroyed." << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
    std::cout << "Copy constructor for WrongCat called." << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const& copy)
{
	WrongAnimal::operator=(copy);
	return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat: Meow meow" << std::endl;
}
