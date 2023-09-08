/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:44:12 by le                #+#    #+#             */
/*   Updated: 2023/09/08 20:03:10 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "A Cat has been created." << std::endl;
}

Cat::~Cat()
{
    std::cout << "A Cat has been destroyed." << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << "Cat: Copy constructor called." << std::endl;
}

Cat &Cat::operator=(Cat const& copy)
{
	Animal::operator=(copy);
	return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
}
