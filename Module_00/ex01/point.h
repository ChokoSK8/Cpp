/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:13:27 by abrun             #+#    #+#             */
/*   Updated: 2022/04/20 10:31:54 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H
#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>
#include <sstream>
#include "Phone_book.hpp"
#include "Contact.hpp"

class Phone_book;

class Contact;

void	init_n_contact(void);

void	search_contact(void);

void	add_contact(void);

void	ask_for_index(void);

void	init_contact(void);

void	setFirstName(void);

void	setLastName(void);

void	setNickname(void);

void	setPhoneNumber(void);

void	setDarkestSecret(void);

std::string	getFirstName(void);

std::string	getLastName(void);

std::string	getNickname(void);

std::string	getPhoneNumber(void);

std::string	getDarkestSecret(void);

void	print_string(std::string str);

void	print_last_string(std::string str);

void	print_contact(Contact contact);
#endif
