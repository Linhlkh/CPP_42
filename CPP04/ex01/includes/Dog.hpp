/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:44:22 by le                #+#    #+#             */
/*   Updated: 2023/09/09 01:02:35 by khle             ###   ########.fr       */
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
		Dog(void);
		Dog(const Dog& copy);
		~Dog(void);

		Dog &operator=(Dog const& copy);
		
		void makeSound(void) const;
		void setbrainIdea(std::string idea, int i);
		std::string getbrainIdea(int i) const;
		Brain* getbrain(void) const;
};

#endif
