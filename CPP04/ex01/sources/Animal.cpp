/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:19:52 by le                #+#    #+#             */
/*   Updated: 2023/09/09 00:54:55 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
    std::cout << "An animal has been created." << std::endl;
}

Animal::~Animal()
{
    std::cout << "An animal has been destroyed." << std::endl;
}

Animal::Animal(std::string name)
{
	this->type = name;
    std::cout << "Animal: " << this->type << " has been created." << std::endl;
}

Animal::Animal(const Animal& copy)
{
    std::cout << "Copy constructor for animal called." << std::endl;
    *this = copy;
}

std::string Animal::gettype() const
{
    return this->type;
}

Animal &Animal::operator=(const Animal& equal)
{
    this->type = equal.type;
    return *this;
}

void Animal::makeSound() const
{
	std::cout << "Random Animal sound." << std::endl;
}
