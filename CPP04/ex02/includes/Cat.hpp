/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: le <le@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:44:16 by le                #+#    #+#             */
/*   Updated: 2023/09/04 17:01:26 by le               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(const Cat& copy);
		~Cat();

		void makeSound(void) const;
		void setbrain(std::string idea);
		Brain* getbrain(void) const;
};

#endif