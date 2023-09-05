/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:19:41 by le                #+#    #+#             */
/*   Updated: 2023/09/05 15:58:22 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Brain.hpp"
#include "../includes/Brain.hpp"

int main()
{
    // std::cout << "Test from subject:\n" << std::endl;
	// {
	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();

	// 	delete j;
	// 	delete i;
	// }
    
	std::cout << "\nArray test for cats:\n" << std::endl;
	{
		std::cout << "\na creation:" << std::endl;
		Cat		a;
		a.setbrain("go outside");
		std::cout << "\nA brain:\n";
		std::cout << a.getbrain()->getideas()[55] << std::endl;
        a.makeSound();
    }
    
}