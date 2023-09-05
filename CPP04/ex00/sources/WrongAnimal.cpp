/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:03:51 by le                #+#    #+#             */
/*   Updated: 2023/09/05 15:49:57 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "An WrongAnimal created." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "An WrongAnimal destroyed." << std::endl;
}

WrongAnimal::WrongAnimal(std::string name)
{
    this->type = name;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    std::cout << "Copy constructor for WrongAnimal called." << std::endl;
    *this = copy;
}

std::string WrongAnimal::gettype() const
{
    return this->type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& equal)
{
    this->type = equal.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Animal random sound" << std::endl;
}