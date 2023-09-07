/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:51:19 by khle              #+#    #+#             */
/*   Updated: 2023/09/07 04:17:39 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

void	Harl::debug()
{
	std::cout << "DEBUG: " 
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" 
	<< std::endl;
}

void	Harl::info()
{
	std::cout << "INFO: " 
	<< "I cannot believe adding extra bacon costs more money. " 
	<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
	<< std::endl;
}

void	Harl::warning()
{
	std::cout << "WARNING: " 
	<< "I think I deserve to have some extra bacon for free. " 
	<< "I’ve been coming for years whereas you started working here since last month." 
	<< std::endl;
}

void	Harl::error()
{
	std::cout << "ERROR: "
	<< "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*Harl_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = -1;
	while(++i < 4)
	{
		if (levels[i] == level)
		{
			(this->*Harl_complain[i])();
			break;
		}
	}
}