/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:44:19 by le                #+#    #+#             */
/*   Updated: 2023/09/05 15:49:41 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "A Dog created." << std::endl;
}

Dog::~Dog()
{
    std::cout << "A Dog destroyed." << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << "Copy constructor for Dog called." << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}