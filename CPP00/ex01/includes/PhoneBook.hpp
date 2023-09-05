/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 05:09:44 by khle              #+#    #+#             */
/*   Updated: 2023/07/26 00:39:40 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact		list_cts[8];
		int			i;
		int			size;
	public:
		PhoneBook(): i(0), size(0){};
		void	add_cts(std::string data[5]);
		void	display_phonebook(void) const;
		void	display_cts(int	x) const;
		int		get_size(void) const;
};
