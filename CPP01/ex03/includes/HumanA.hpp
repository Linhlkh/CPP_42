/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 04:59:53 by khle              #+#    #+#             */
/*   Updated: 2023/07/26 02:38:54 by khle             ###   ########.fr       */
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
		HumanA(std::string nameA, Weapon &weaponTypeA) : name(nameA), weaponA(&weaponTypeA) {};
		~HumanA(){};
		void	attack(void) const;
};

#endif