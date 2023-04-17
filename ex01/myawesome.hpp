/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myawesome.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:49:21 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/17 11:22:24 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYAWESOME_HPP
# define MYAWESOME_HPP

#include <iostream>
#include "PhoneBook.hpp"
#include "Contacts.hpp"

void    display_contact_info(PhoneBook *phonebook);
void    add_contact_info(PhoneBook *phonebook);
void    init(PhoneBook *phonebook);
#endif