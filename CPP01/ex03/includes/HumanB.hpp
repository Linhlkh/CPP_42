/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 05:00:00 by khle              #+#    #+#             */
/*   Updated: 2023/09/07 03:23:46 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon			*weaponB;
		std::string		name;
	public:
		HumanB(std::string nameB);
		~HumanB();
		void	setWeapon(Weapon& weaponB);
		Weapon*	getWeapon(void) const;
		void	attack(void) const;
};

#endif