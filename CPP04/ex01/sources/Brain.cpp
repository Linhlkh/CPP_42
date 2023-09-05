/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:52:43 by le                #+#    #+#             */
/*   Updated: 2023/09/05 15:56:19 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created." << std::endl;
}

Brain::Brain(const Brain& copy)
{
    *this = copy;
    std::cout << "Brain: copy constructor called." << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed." << std::endl;
}

std::string* Brain::getideas()
{
    return (this->ideas);
}

void Brain::setideas(std::string idea)
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = idea;
}

Brain &Brain::operator=(const Brain& equal)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = equal.ideas[i];
    return *this;
}