/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:44:12 by le                #+#    #+#             */
/*   Updated: 2023/09/05 15:56:24 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    this->brain = new Brain();
    std::cout << "A Cat created." << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "A Cat destroyed." << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    this->brain = new Brain();
    *this->brain = *copy.getbrain();
    std::cout << "Copy constructor for Cat called." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
}

void Cat::setbrain(std::string idea)
{
    this->brain->setideas(idea);
}

Brain* Cat::getbrain() const
{
    return this->brain;
}