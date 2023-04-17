/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:17:33 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/17 14:22:19 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::display_columns(PhoneBook *phonebook)
{
    int i = 0;
    int len_of_info = 0;
    while (i < contacts_are_full)
    {
        std::cout << "|" << "         " << i << "|";
        ft_make_right_allignment(phonebook, contacts[i].FirstName);
        ft_make_right_allignment(phonebook, contacts[i].LastName);
        ft_make_right_allignment(phonebook, contacts[i].Nickname);
        std::cout << std::endl;
        i++;
    }
}

void    PhoneBook::display_contact_info(PhoneBook *phonebook)
{
    
    std::string index_string;
    int index_input;
    if (contacts_are_full == 0)
    {
        std::cout << "You have to add one contact to the phonebook first!" << std::endl;
        return ;
    }
    display_columns(phonebook);
    std::cout << "Enter Index of which you want the contact infos:" << std::endl;
    std::cin >> index_string;
    while (check_if_input_is_an_int(index_string) == 1)
    {
        std::cout << "Only input numbers!" << std::endl;
        std::cin >> index_string;
    }
    index_input = std::stoi(index_string);
    while (index_input >= contacts_are_full)
    {
        std::cout << "Choose an Index below " << contacts_are_full << std::endl;
        std::cin >> index_string;
        while (check_if_input_is_an_int(index_string) != 0)
        {
            std::cout << "Only input numbers!" << std::endl;
            std::cin >> index_string;
        }
        index_input = std::stoi(index_string);
    }
    std::cout << "First name: " << phonebook->contacts[index_input].FirstName << std::endl;
    std::cout << "Last name: " << phonebook->contacts[index_input].LastName << std::endl;
    std::cout << "Nickname: " << phonebook->contacts[index_input].Nickname << std::endl;
    std::cout << "Phonenumber: " << phonebook->contacts[index_input].PhoneNumber << std::endl;
    std::cout << "Darkest secret: " << phonebook->contacts[index_input].DarkestSecret << std::endl;
}