/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:03:34 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/12 10:10:05 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP
# pragma once
#include <iostream>
#include "PhoneBook.hpp"

class Contacts
{
    public:
        std::string LastName;
        std::string FirstName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
};

#endif