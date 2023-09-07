/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 01:56:43 by khle              #+#    #+#             */
/*   Updated: 2023/09/06 18:20:17 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	private:
		std::string		name;
	public:
		Zombie();
		Zombie(std::string _name);
		~Zombie();
		void	setname(std::string name);
		std::string	getname(void);
		void	announce(void) const;
};

Zombie*	zombieHorde(int	N, std::string name);

#endif
