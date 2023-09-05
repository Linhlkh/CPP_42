/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 04:46:15 by khle              #+#    #+#             */
/*   Updated: 2023/09/05 17:38:38 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iomanip>


void	print_name(std::string name)
{
	if(name.size() > 10)
		std::cout << std::setw(9) << name.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << name;
}

void	PhoneBook::add_cts(std::string data[5])
{
	int	i;
	i = this -> i;
	this -> list_cts[i]. setFirstname(data[0]);
	this -> list_cts[i]. setLastname(data[1]);
	this -> list_cts[i]. setNickname(data[2]);
	this -> list_cts[i]. setPhoneNumber(data[3]);
	this -> list_cts[i]. setDarkestSecret(data[4]);
	this -> i = (i + 1) % 8;

	if (this -> size < 8)
		this -> size++;
}

int		PhoneBook::get_size() const
{
	return (this -> size);
}

void	PhoneBook::display_phonebook() const
{
	int	i = 0;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" <<std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	while (i < this -> size)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i;
		std::cout << "|";
		print_name(this -> list_cts[i].getFirstname());
		std::cout << "|";
		print_name(this -> list_cts[i].getLastname());
		std::cout << "|";
		print_name(this -> list_cts[i].getNickname());
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

void	PhoneBook::display_cts(int x) const
{
	std::cout << "Contact information:" << std::endl;
	std::cout << "First name: " << this -> list_cts[x].getFirstname() << std::endl;
	std::cout << "Last name: " << this -> list_cts[x].getLastname() << std::endl;
	std::cout << "Nick name: " << this -> list_cts[x].getNickname() << std::endl;
	std::cout << "Phone number: " << this -> list_cts[x].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << this -> list_cts[x].getDarkestSecret() << std::endl;	
}
