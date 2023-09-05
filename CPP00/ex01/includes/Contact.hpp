/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 04:14:57 by khle              #+#    #+#             */
/*   Updated: 2023/07/24 01:54:06 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	private:
		std::string	Firstname;
		std::string	Lastname;
		std::string	Nickname;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
		
	public:
		void		setFirstname(std::string firstname);
		void		setLastname(std::string lastname);
		void		setNickname(std::string nickname);
		void		setPhoneNumber(std::string phonenumber);
		void		setDarkestSecret(std::string darkestsecret);
		std::string	getFirstname() const;
		std::string	getLastname() const;
		std::string	getNickname() const;
		std::string	getPhoneNumber() const;
		std::string	getDarkestSecret() const;
};