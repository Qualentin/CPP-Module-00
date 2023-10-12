/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:21:27 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/12 10:58:20 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string    ft_trunkate_str(std::string contactfield)
{
    int i = 0;
    int j = 0;
    std::string tmp;

    while (contactfield[i] == ' ')
        i++;
    while (contactfield[i])
    {
        tmp[j++] = contactfield[i++];
        if (contactfield[i] == ' ')
        {
            while (contactfield[i] == ' ' && contactfield[i])
                i++;
        }
        if (contactfield[i] != '\0')
            tmp[j++] = ' ';

    }
    return (tmp);
}

void    PhoneBook::add_contact_info(PhoneBook *phonebook)
{
    std::string contactfield;

    std::cout << "Enter first name!" << std::endl;
    std::getline(std::cin, contactfield);
    if (contactfield.empty())
            exit (1);
    contacts[index].FirstName = ft_trunkate_str(contactfield);;
    std::cout << "Enter last name!" << std::endl;
    std::getline(std::cin, contactfield);
    if (contactfield.empty())
            exit (1);
    contacts[index].LastName = contactfield;
    std::cout << "Enter nickname!" << std::endl;
    std::getline(std::cin, contactfield);
    if (contactfield.empty())
            exit (1);
    contacts[index].Nickname = contactfield;
    std::cout << "Enter phonenumber!" << std::endl;
    std::getline(std::cin, contactfield);
    if (contactfield.empty())
            exit (1);
    contacts[index].PhoneNumber = contactfield;
    std::cout << "Enter darkest secret!" << std::endl;
    std::getline(std::cin, contactfield);
    if (contactfield.empty())
            exit (1);
    contacts[index].DarkestSecret = contactfield;
    index++;
    if (contacts_are_full < 8)
        contacts_are_full++;
    if (index == 8)
        index = 0;
}
