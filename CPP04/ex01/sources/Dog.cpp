/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:44:19 by le                #+#    #+#             */
/*   Updated: 2023/09/05 15:56:28 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    this->brain = new Brain();
    std::cout << "A Dog created." << std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "A Dog destroyed." << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    this->brain = new Brain();
    *this->brain = *copy.getbrain();
    std::cout << "Copy constructor for Dog called." << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}

void Dog::setbrain(std::string idea)
{
    this->brain->setideas(idea);
}

Brain* Dog::getbrain() const
{
    return this->brain;
}