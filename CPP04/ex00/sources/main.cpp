/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:19:41 by le                #+#    #+#             */
/*   Updated: 2023/09/08 21:25:51 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

// int main()
// {
//     Animal anRandomAnimal;
//     Cat aRandomCat;
//     Dog aRandomDog;

//     aRandomCat.makeSound();
//     aRandomDog.makeSound();
//     anRandomAnimal.makeSound();
// }

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const WrongAnimal* i = new WrongCat();
std::cout << j->gettype() << " " << std::endl;
std::cout << i->gettype() << " " << std::endl << std::endl;
j->makeSound();
i->makeSound();
meta->makeSound();
delete meta;
delete j;
delete i;
}