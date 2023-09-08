/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:19:41 by le                #+#    #+#             */
/*   Updated: 2023/09/09 01:00:39 by khle             ###   ########.fr       */
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
    
	// std::cout << "\nTest for cats:\n" << std::endl;
	// {
	// 	std::cout << "\na creation:" << std::endl;
	// 	Cat		a;
	// 	a.setbrainIdea("go outside", 0);
	// 	std::cout << "\nA brain:\n";
	// 	std::cout << a.getbrainIdea(0) << std::endl;
    //     a.makeSound();
    // }
///////////////////////////////////////////////////////////

	Animal	*animalList[10];
	
	for (int i = 0; i < 10 ; i++) {
		if (i % 2 == 0) {
			animalList[i] = new Cat();
		} else {
			animalList[i] = new Dog();
		}
	}
	std::cout	<< std::endl;

	for (int i = 0; i < 10 ; i++) {
		std::cout	<< "Random " << animalList[i]->gettype() << ": " << std::flush;
		animalList[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	

	
	for (int i = 0; i < 10 ; i++) {
		delete animalList[i];
	}
	////////////////////////////////////////////////////////////
	// Cat A;
	// Cat B;
	
	// std::cout	<< std::endl;
	// std::cout << "<A> : " << A.getbrainIdea(0) << " is my first idea!" << std::endl; 
	// std::cout << "<B> : " << B.getbrainIdea(0) << " is my first idea!" << std::endl; 
	// std::cout	<< std::endl;
	
	// B.setbrainIdea("Sleeping", 0);
	// std::cout << "<A> : " << A.getbrainIdea(0) << " is my first idea!" << std::endl; 
	// std::cout << "<B> : " << B.getbrainIdea(0) << " is my first idea!" << std::endl;
	// std::cout << "[Brain A adr] - " << A.getbrain() << std::endl;
	// std::cout << "[Brain B adr] - " << B.getbrain() << std::endl;
	// std::cout	<< std::endl;
	
	// A = B;
	
	// std::cout	<< std::endl;
	// std::cout << "<A> : " << A.getbrainIdea(0) << " is my first idea!" << std::endl; 
	// std::cout << "<B> : " << B.getbrainIdea(0) << " is my first idea!" << std::endl;
	// std::cout << "[Brain A adr] - " << A.getbrain() << std::endl;
	// std::cout << "[Brain B adr] - " << B.getbrain() << std::endl;
	// std::cout	<< std::endl;

	// Cat C(A);
	// std::cout << "<C> : " << A.getbrainIdea(0) << " is my first idea!" << std::endl;
	// std::cout << "[Brain C adr] - " << C.getbrain() << std::endl;
	// std::cout	<< std::endl;
	
    return 0;
    
}