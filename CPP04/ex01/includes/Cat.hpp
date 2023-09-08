/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:44:16 by le                #+#    #+#             */
/*   Updated: 2023/09/09 01:02:42 by khle             ###   ########.fr       */
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
		Cat(void);
		Cat(const Cat& copy);
		~Cat(void);

		Cat &operator=(Cat const& copy);
		
		void makeSound(void) const;
		void setbrainIdea(std::string idea, int i);
		std::string getbrainIdea(int i) const;
		Brain* getbrain(void) const;
};

#endif