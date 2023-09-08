/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:44:19 by le                #+#    #+#             */
/*   Updated: 2023/09/09 00:39:27 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    this->brain = new Brain();
    std::cout << "A Dog has been created." << std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "A Dog has beeb destroyed." << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    this->brain = new Brain();
    *this->brain = *copy.getbrain();
    std::cout << "Dog: Copy constructor called." << std::endl;
}

Dog &Dog::operator=(Dog const& copy)
{
	if (this!= &copy)
	{
		Animal::operator=(copy);
		delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
	return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}

void Dog::setbrainIdea(std::string idea, int i)
{
    this->brain->setidea(idea, i);
}

std::string Dog::getbrainIdea(int i) const
{
	return (this->brain->getidea(i));
}

Brain* Dog::getbrain() const
{
    return this->brain;
}