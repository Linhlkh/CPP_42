/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:52:43 by le                #+#    #+#             */
/*   Updated: 2023/09/09 00:33:11 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain has been created." << std::endl;
}

Brain::Brain(const Brain& copy)
{
    *this = copy;
    std::cout << "Brain: copy constructor called." << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain has been destroyed." << std::endl;
}

Brain &Brain::operator=(const Brain& equal)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = equal.ideas[i];
    return *this;
}

std::string Brain::getidea(int index)
{
    return (this->ideas[index]);
}

void Brain::setidea(std::string idea, int index)
{
	if (index <100)
		this->ideas[index] = idea;
	else
	{
		std::cout << "Error index" << std::endl;
		return ;
	}
}
