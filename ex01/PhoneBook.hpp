/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:03:46 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/12 11:47:33 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# pragma once
#include <iostream>
#include <cstdlib>
#include "Contacts.hpp"

class PhoneBook
{
    private:
        Contacts contacts[8];
        int index;
        int contacts_are_full;

    public:
        PhoneBook();
        void    add_contact_info(void) ;
        void    display_contact_info();
        void    display_columns();
        void    ft_make_right_allignment(std::string str);
};

int     check_if_input_is_an_int(std::string str);
int     ft_get_len(std::string str);
#endif
