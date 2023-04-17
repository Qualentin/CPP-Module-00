/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:03:46 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/17 11:50:25 by vstockma         ###   ########.fr       */
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
        void    add_contact_info(PhoneBook *phonebook) ;
        void    display_contact_info(PhoneBook *phonebook);
        void    init(PhoneBook *phonebook);
};



#endif