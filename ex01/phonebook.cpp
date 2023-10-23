/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:17:33 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/12 14:50:07 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::display_columns()
{
    int i = 0;
    while (i < contacts_are_full)
    {
        std::cout << "|" << "         " << i << "|";
        ft_make_right_allignment(contacts[i].get_name(1));
        ft_make_right_allignment(contacts[i].get_name(2));
        ft_make_right_allignment(contacts[i].get_name(3));
        std::cout << std::endl;
        i++;
    }
}

void    PhoneBook::display_contact_info()
{
    
    std::string index_string;
    int index_input;
    if (contacts_are_full == 0)
    {
        std::cout << "You have to add one contact to the phonebook first!" << std::endl;
        return ;
    }
    display_columns();
    std::cout << "Enter Index of which you want the contact infos:" << std::endl;
    while (1)
    {
        if (!std::getline(std::cin, index_string))
        {
            if (std::cin.eof())
                exit(1);
        }
        while (check_if_input_is_an_int(index_string) != 0)
        {

            if (std::cin.eof())
                exit(1);
            std::cout << "Only input numbers!" << std::endl;
            if (!std::getline(std::cin, index_string))
            {
                if (std::cin.eof())
                    exit(1);
            }
        }
        if (index_string.length() > 2 || index_string.empty())
        {
            std::cout << "Choose an Index below " << contacts_are_full << std::endl;
            continue;
        }
        index_input = std::atoi(index_string.c_str());
        if (index_input >= contacts_are_full)
            std::cout << "Choose an Index below " << contacts_are_full << std::endl;
        else
        {
            std::cout << "First name: " << contacts[index_input].get_name(1) << std::endl;
            std::cout << "Last name: " << contacts[index_input].get_name(2) << std::endl;
            std::cout << "Nickname: " << contacts[index_input].get_name(3) << std::endl;
            std::cout << "Phonenumber: " << contacts[index_input].get_name(4) << std::endl;
            std::cout << "Darkest secret: " << contacts[index_input].get_name(5) << std::endl;
            break ;
        } 
    }
    
}
