/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 04:59:53 by khle              #+#    #+#             */
/*   Updated: 2023/09/07 03:34:56 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
	private:
		std::string		name;
		Weapon			*weaponA;
	public:
		HumanA(std::string nameA, Weapon &weaponTypeA);
		~HumanA();
		void	attack(void) const;
};

#endif