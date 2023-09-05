/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:51:27 by khle              #+#    #+#             */
/*   Updated: 2023/09/05 17:48:47 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

void	display_complain(int i, Harl noodle)
{
	switch (i)
	{
		case 0:
			noodle.complain("DEBUG");
		case 1:
			noodle.complain("INFO");
		case 2:
			noodle.complain("WARNING");
		case 3:
			noodle.complain("ERROR");
			break;
	}
}

int main(int ac, char **av)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = -1;
	Harl noodle;
	
	if (ac != 2)
	{
		std::cout << "Not a complain." << std::endl;
		return 1;
	}
	while (++i < 4)
	{
		if (levels[i] == av[1])
		{
			display_complain(i, noodle);
			return 0;
		}
	}
	if (i == 4)
		std::cout << "Not a big problem." << std::endl;
	return 1;
}