/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 05:00:14 by khle              #+#    #+#             */
/*   Updated: 2023/09/07 03:20:55 by khle             ###   ########.fr       */
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
		Weapon(std::string weaponType);
		~Weapon(void);
		void				setType(std::string type);
		const std::string&	getType(void);
};

#endif