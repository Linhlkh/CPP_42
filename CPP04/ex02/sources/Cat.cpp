/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:44:12 by le                #+#    #+#             */
/*   Updated: 2023/09/09 00:36:34 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    this->brain = new Brain();
    std::cout << "A Cat has been created." << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "A Cat has been destroyed." << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    this->brain = new Brain();
    *this->brain = *copy.brain;
    std::cout << "Cat: Copy constructor called." << std::endl;
}

Cat &Cat::operator=(Cat const& copy)
{
	if (this!= &copy)
	{
		Animal::operator=(copy);
		delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
	return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
}

void Cat::setbrainIdea(std::string idea, int i)
{
    this->brain->setidea(idea, i);
}

std::string Cat::getbrainIdea(int i) const
{
	return (this->brain->getidea(i));
}

Brain* Cat::getbrain() const
{
    return this->brain;
}