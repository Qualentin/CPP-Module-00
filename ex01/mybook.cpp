/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mybook.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:24:51 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/17 12:54:33 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myawesome.hpp"

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

void    PhoneBook::display_contact_info(PhoneBook *phonebook)
{
    int i = 0;
    std::string index_string;
    int index_input;
    if (phonebook->contacts_are_full == 0)
    {
        std::cout << "You have to add one contact to the phonebook first!" << std::endl;
        return ;
    }
    while (i < phonebook->contacts_are_full)
    {
        std::cout << i << "|" << phonebook->contacts[i].FirstName << "|" << phonebook->contacts[i].LastName << "|" << phonebook->contacts[i].Nickname << std::endl;
        i++;
    }
    std::cout << "Enter Index of which you want the contact infos:" << std::endl;
    std::cin >> index_string;
    while (check_if_input_is_an_int(index_string) == 1)
    {
        std::cout << "Only input numbers!" << std::endl;
        std::cin >> index_string;
    }
    index_input = std::stoi(index_string);
    while (index_input >= phonebook->contacts_are_full)
    {
        std::cout << "Choose an Index below " << phonebook->contacts_are_full << std::endl;
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

void    PhoneBook::add_contact_info(PhoneBook *phonebook)
{
    std::string contactfield;

    std::cout << "Enter first name!" << std::endl;
    std::cin >> contactfield;
    phonebook->contacts[phonebook->index].FirstName = contactfield;
    std::cout << "Enter last name!" << std::endl;
    std::cin >> contactfield;
    phonebook->contacts[phonebook->index].LastName = contactfield;
    std::cout << "Enter nickname!" << std::endl;
    std::cin >> contactfield;
    phonebook->contacts[phonebook->index].Nickname = contactfield;
    std::cout << "Enter phonenumber!" << std::endl;
    std::cin >> contactfield;
    phonebook->contacts[phonebook->index].PhoneNumber = contactfield;
    std::cout << "Enter darkest secret!" << std::endl;
    std::cin >> contactfield;
    phonebook->contacts[phonebook->index].DarkestSecret = contactfield;
    phonebook->index++;
    if (phonebook->contacts_are_full < 8)
        phonebook->contacts_are_full++;
    if (phonebook->index == 8)
        phonebook->index = 0;
}

void    PhoneBook::init(PhoneBook *phonebook)
{
    phonebook->index = 0;
    phonebook->contacts_are_full = 0;
}

int main(int ac, char **av)
{
    
    std::string command;
    PhoneBook phonebook;

    int i = 1;
    phonebook.init(&phonebook);
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