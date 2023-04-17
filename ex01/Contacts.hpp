/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:03:34 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/17 11:14:07 by vstockma         ###   ########.fr       */
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