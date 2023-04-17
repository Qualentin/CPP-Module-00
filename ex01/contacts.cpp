/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:21:27 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/17 14:26:58 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::add_contact_info(PhoneBook *phonebook)
{
    std::string contactfield;

    std::cout << "Enter first name!" << std::endl;
    std::cin >> contactfield;
    contacts[index].FirstName = contactfield;
    std::cout << "Enter last name!" << std::endl;
    std::cin >> contactfield;
    contacts[index].LastName = contactfield;
    std::cout << "Enter nickname!" << std::endl;
    std::cin >> contactfield;
    contacts[index].Nickname = contactfield;
    std::cout << "Enter phonenumber!" << std::endl;
    std::cin >> contactfield;
    contacts[index].PhoneNumber = contactfield;
    std::cout << "Enter darkest secret!" << std::endl;
    std::cin >> contactfield;
    contacts[index].DarkestSecret = contactfield;
    index++;
    if (contacts_are_full < 8)
        contacts_are_full++;
    if (index == 8)
        index = 0;
}