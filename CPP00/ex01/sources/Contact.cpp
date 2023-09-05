/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 04:48:13 by khle              #+#    #+#             */
/*   Updated: 2023/09/05 17:38:23 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

void	Contact::setFirstname(std::string firstname)
{
	Firstname = firstname;
}

void	Contact::setLastname(std::string lastname)
{
	Lastname = lastname;
}

void	Contact::setNickname(std::string nickname)
{
	Nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phonenumber)
{
	PhoneNumber = phonenumber;
}

void	Contact::setDarkestSecret(std::string darkestsecret)
{
	DarkestSecret = darkestsecret;
}

std::string	Contact::getFirstname() const
{
	return Firstname;
}

std::string	Contact::getLastname() const
{
	return Lastname;
}

std::string	Contact::getNickname() const
{
	return Nickname;
}

std::string	Contact::getPhoneNumber() const
{
	return PhoneNumber;
}

std::string	Contact::getDarkestSecret() const
{
	return DarkestSecret;
}

