/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:44:22 by le                #+#    #+#             */
/*   Updated: 2023/09/04 17:04:22 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const Dog& copy);
		~Dog();

		void makeSound(void) const;
		void setbrain(std::string idea);
		Brain* getbrain(void) const;
};

#endif
