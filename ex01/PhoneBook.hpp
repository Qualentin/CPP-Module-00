/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:03:46 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/18 12:03:51 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# pragma once
#include <iostream>
#include "Contacts.hpp"

class PhoneBook
{
    private:
        Contacts contacts[8];
        int index;
        int contacts_are_full;

    public:
        PhoneBook();
        void    add_contact_info(PhoneBook *phonebook) ;
        void    display_contact_info(PhoneBook *phonebook);
        void    display_columns(PhoneBook *phonebook);
        void    ft_make_right_allignment(PhoneBook *phonebook, std::string str);
};

int     check_if_input_is_an_int(std::string str);
int     ft_get_len(std::string str);
#endif