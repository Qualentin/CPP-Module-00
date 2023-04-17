/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:19:17 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/17 14:27:10 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::ft_make_right_allignment(PhoneBook *phonebook, std::string str)
{
    int i = 0;
    int len_of_info = ft_get_len(str);
    if (len_of_info < 10)
    {
        while (i < (10 - len_of_info))
        {
            std::cout << " ";
            i++;
        }
        std::cout << str << "|";
        return ;
    }
    else if (len_of_info == 10)
    {
        std::cout << str << "|";
        return ;
    }
    i = 0;
    while (i < 9)
    {
        std::cout << str[i];
        i++;
    }
    std::cout << ".|";
}

int     check_if_input_is_an_int(std::string str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (1);
        i++;
    }
    return (0);
}

int     ft_get_len(std::string str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}