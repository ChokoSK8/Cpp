/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:36:19 by abrun             #+#    #+#             */
/*   Updated: 2021/11/11 11:51:56 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include "phone_book.h"

class	Contact;

class	Contact
{
	private :
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

	public :
		void	setFirstName(const std::string &first_name);
		void	setLastName(const std::string &last_name);
		void	setNickName(const std::string &nickname);
		void	setPhoneNumber(const std::string &phone_number);
		void	setDarkestSecret(const std::string &darkest_secret);
};
