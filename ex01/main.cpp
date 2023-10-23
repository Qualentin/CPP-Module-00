/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:24:51 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/12 14:34:41 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
    contacts_are_full = 0;
}

int main(int ac, char **av)
{
    std::string command;
    PhoneBook phonebook;

    
    (void)av;
    if (ac > 1)
    {
        std::cout << "Too many arguments!\n";
        return (1);
    }
    while (1)
    {
        std::cout << "Enter a command: ADD, SEARCH, EXIT\n";
        if (!std::getline(std::cin, command))
        {
            if (std::cin.eof())
                exit(1);
        }
        if (command == "EXIT")
            break ;
        else if (command == "ADD")
            phonebook.add_contact_info();
        else if (command == "SEARCH")
            phonebook.display_contact_info();
    }
    return (0);
}