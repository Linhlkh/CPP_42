/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <khle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:52:52 by le                #+#    #+#             */
/*   Updated: 2023/09/09 00:17:25 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(const Brain& copy);
        ~Brain(void);

        Brain &operator=(const Brain& equal);

        std::string  	getidea(int index);
        void            setidea(std::string idea, int index); 
};

#endif