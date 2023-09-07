/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 02:26:32 by khle              #+#    #+#             */
/*   Updated: 2023/09/06 16:53:38 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int	check_num(std::string number)
{
	int	i;

	i = 0;
	while(number[i])
	{
		if(number[i] == ' ')
		{
			i++;
			continue;
		}
		if(number[i] < '0' || number[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	int	i;
	std::string data[5];
	std::string input;
	PhoneBook	phonebook;

	while(1)
	{
		std::cout << "\001\033[1;34m\002" << "Phonebook> " << "\001\033[0;0m\002";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return 0;
		if (input == "ADD")
		{
			std::cout << "Please enter first name:" << std::endl;
			getline(std::cin, data[0]);
			std::cout << "Please enter last name:" << std::endl;
			getline(std::cin, data[1]);
			std::cout << "Please enter nick name:" << std::endl;
			getline(std::cin, data[2]);
			std::cout << "Please enter phone number:" << std::endl;
			getline(std::cin, data[3]);
			while (check_num(data[3]) == 0)
			{
				std::cout << "Invalid number, please enter valid number" << std::endl;
				getline(std::cin, data[3]);
			}
			std::cout << "Please enter darkest secret:" << std::endl;
			getline(std::cin, data[4]);
			phonebook.add_cts(data);
			std::cout << "Add contact successfully" << std::endl;
		}
		else if (input == "SEARCH")
		{
			phonebook.display_phonebook();
			std::cout << "Please enter index" << std::endl;
			std::cin >> i;
			if (std::cin.fail() || i < 0 || i >= phonebook.get_size())
			{
				std::cin.clear();
				std::cout << "Invalid index!" << std::endl;
				std::getline(std::cin, input);
				continue;
			}
			phonebook.display_cts(i);
			std::getline(std::cin, input);
		}
		else if (input == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}
}