/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:09:57 by abrun             #+#    #+#             */
/*   Updated: 2021/11/13 13:01:14 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# include "phone_book.h"
# include "Contact.hpp"

class	Phone_book
{
	protected:
		Contact	contact[8];
		int		n_contact;
	
	public:
		Phone_book();
		virtual ~Phone_book();

		void	init_n_contact();
		void	search_contact();
		void	add_contact();
};
#endif
