/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:51:27 by khle              #+#    #+#             */
/*   Updated: 2023/09/05 17:48:39 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main()
{
	Harl noodle;
	noodle.complain("DEBUG");
	noodle.complain("INFO");
	noodle.complain("WARNING");
	noodle.complain("ERROR");
}