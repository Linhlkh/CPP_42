/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:19:37 by le                #+#    #+#             */
/*   Updated: 2023/09/04 18:24:07 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string name);
		Animal(const Animal& copy);
		virtual ~Animal();
		
		std::string gettype() const;
		
		Animal &operator=(const Animal& equal);
		virtual void makeSound(void) const = 0;
};

#endif
