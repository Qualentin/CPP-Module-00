/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:21:27 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/13 10:07:14 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    Contacts::set_name(std::string contactfield, int i)
{
        if (i == 1)
                FirstName = contactfield;
        if (i == 2)
                LastName = contactfield;
        if (i == 3)
                Nickname = contactfield;
        if (i == 4)
                PhoneNumber = contactfield;
        if (i == 5)
                DarkestSecret = contactfield;
}

std::string    Contacts::get_name(int i)
{
        if (i == 1)
                return (FirstName);
        if (i == 2)
                return (LastName);
        if (i == 3)
                return (Nickname);
        if (i == 4)
                return (PhoneNumber);
        if (i == 5)
                return (DarkestSecret);
        return (NULL);
}

int    is_space(std::string contactfield)
{
    int i = 0;
    while (contactfield[i])
    {
        if (isspace(contactfield[i]) == 0)
            return (0);
        i++;
    }
    return (1);
}

void    PhoneBook::add_contact_info(void)
{
    std::string contactfield;

    while (1)
    {
        if (std::cin.eof())
            exit(1);
        std::cout << "Enter first name!" << std::endl;
        if (!std::getline(std::cin, contactfield))
        {
            if (std::cin.eof())
                exit(1);
        }
        if (is_space(contactfield) == 1)
            continue ;
        else
        {
            contacts[index].set_name(contactfield, 1);
            break ;
        }
    }
    while (1)
    {
        if (std::cin.eof())
            exit(1);
        std::cout << "Enter last name!" << std::endl;
        if (!std::getline(std::cin, contactfield))
        {
            if (std::cin.eof())
                exit(1);
        }
        if (is_space(contactfield) == 1)
            continue ;
        else
        {
            contacts[index].set_name(contactfield, 2);
            break ;
        }
    }
    while (1)
    {
        if (std::cin.eof())
            exit(1);
        std::cout << "Enter nickname!" << std::endl;
        if (!std::getline(std::cin, contactfield))
        {
            if (std::cin.eof() || std::cin.fail())
                exit(1);
        }
        if (is_space(contactfield) == 1)
            continue ;
        else
        {
            contacts[index].set_name(contactfield, 3);
            break ;
        }
    }
    while (1)
    {
        if (std::cin.eof())
            exit(1);
        std::cout << "Enter phonenumber!" << std::endl;
        if (!std::getline(std::cin, contactfield))
        {
            if (std::cin.eof())
                exit(1);
        }
        if (is_space(contactfield) == 1)
            continue ;
        else
        {
            contacts[index].set_name(contactfield, 4);
            break ;
        }
    }
    while (1)
    {
        if (std::cin.eof())
            exit(1);
        std::cout << "Enter darkest secret!" << std::endl;
        if (!std::getline(std::cin, contactfield))
        {
            if (std::cin.eof())
                exit(1);
        }
        if (is_space(contactfield) == 1)
            continue ;
        else
        {
            contacts[index].set_name(contactfield, 5);
            break ;
        }
    }
    index++;
    if (contacts_are_full < 8)
        contacts_are_full++;
    if (index == 8)
        index = 0;
}
