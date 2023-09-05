/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 04:21:25 by khle              #+#    #+#             */
/*   Updated: 2023/07/26 05:53:34 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::string		str;
	char 			c;
	int				i;
	int				pos;
	
	if(ac == 4)
	{
		std::ifstream oldfile(av[1]);
		if (!oldfile.is_open())
		{
			std::cout << "Cannot open file" << std::endl;
			return 1;
		}
		while (!oldfile.eof() && oldfile >> std::noskipws >> c)
			str += c;
		oldfile.close();
		std::ofstream newfile((std::string(av[1]) + ".replace").c_str());
		if (newfile.fail())
			return 1;
		i = -1;
		while (++i < (int)str.size())
		{
			pos = str.find(av[2], i);
			if (pos != -1 && pos == i)
			{
				newfile << av[3];
				i += std::string(av[2]).size() - 1;
			}
			else
				newfile << str[i];
		}
		oldfile.close();
		newfile.close();
		return 0;
	}
	else
	{
		std::cout << "Arg invalid" << std::endl;
		return 1;
	}
}