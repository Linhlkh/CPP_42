/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:19:52 by le                #+#    #+#             */
/*   Updated: 2023/09/05 15:49:27 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
    std::cout << "An animal created." << std::endl;
}

Animal::~Animal()
{
    std::cout << "An animal destroyed." << std::endl;
}

Animal::Animal(std::string name)
{
    this->type = name;
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
