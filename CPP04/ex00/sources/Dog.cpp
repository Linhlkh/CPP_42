/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:44:19 by le                #+#    #+#             */
/*   Updated: 2023/09/08 20:09:18 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "A Dog has been created." << std::endl;
}

Dog::~Dog()
{
    std::cout << "A Dog has been destroyed." << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << "Dog: Copy constructor called." << std::endl;
}

Dog &Dog::operator=(Dog const& copy)
{
	Animal::operator=(copy);
	return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}