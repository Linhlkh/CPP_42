/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:44:12 by le                #+#    #+#             */
/*   Updated: 2023/09/05 15:49:37 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "A Cat created." << std::endl;
}

Cat::~Cat()
{
    std::cout << "A Cat destroyed." << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << "Copy constructor for Cat called." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
}
