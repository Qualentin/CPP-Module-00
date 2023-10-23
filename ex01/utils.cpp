/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:19:17 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/12 15:59:49 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::ft_make_right_allignment(std::string str)
{
    int i = 0;
    int len_of_info = str.length();
    if (len_of_info < 10)
    {
        while (i < (10 - len_of_info))
        {
            std::cout << " ";
            i++;
        }
        i = 0;
        while (str[i] && i < 10)
        {
            if (isspace(str[i]) != 0)
                std::cout << ' ';
            else
                std::cout << str[i];
            i++;
        }
        std::cout << "|";
        return ;
    }
    else if (len_of_info == 10)
    {
        while (i < 10)
        {
            if (isspace(str[i]) != 0)
                std::cout << ' ';
            else if (isspace(str[i]) == 0)
                std::cout << str[i];
            i++;
        }
        std::cout << "|";
        return ;
    }
    i = 0;
    while (i < 9)
    {
        if (isspace(str[i]) == 1)
            std::cout << ' ';
        else
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
