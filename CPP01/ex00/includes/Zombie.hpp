/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 01:56:43 by khle              #+#    #+#             */
/*   Updated: 2023/09/07 00:21:00 by khle             ###   ########.fr       */
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
		Zombie(std::string name);
		void announce(void);
		~Zombie(void);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif
