/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:21:22 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/12 16:06:05 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print_arg_in_uppercase(std::string str)
{
    int i = 0;
    while (str[i])
    {
        std::cout << (char)toupper(str[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    int i = 1;
    while (i < ac)
    {
       print_arg_in_uppercase(av[i]);
       i++;
    }
    std::cout << std::endl;
    return (0);
}
