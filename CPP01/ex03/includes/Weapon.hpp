/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 05:00:14 by khle              #+#    #+#             */
/*   Updated: 2023/07/26 04:19:27 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	private:
		std::string		type;
		
	public:
		Weapon(std::string weaponType) : type(weaponType){};
		void		setType(std::string type);
		std::string	getType(void) const;
};

#endif