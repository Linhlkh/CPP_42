/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 04:12:53 by khle              #+#    #+#             */
/*   Updated: 2023/09/06 16:44:17 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>

int main(int ac, char *av[])
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return 0;
	}
	for (int i = 1; av[i]; i++)
	{
		for (int j = 0; av[i][j]; j++)
			putchar(std::toupper(av[i][j]));
	}
	std::cout << std::endl;
	return 0;
}