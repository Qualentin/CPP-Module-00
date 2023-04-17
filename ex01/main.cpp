/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:24:51 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/17 14:37:51 by vstockma         ###   ########.fr       */
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

    int i = 1;
    while (1)
    {
    std::cout << "Enter a command: ";
    std::cin >> command;
    if (command == "EXIT")
        break ;
    else if (command == "ADD")
        phonebook.add_contact_info(&phonebook);
    else if (command == "SEARCH")
        phonebook.display_contact_info(&phonebook);
    }
    return (0);
}