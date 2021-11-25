/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:09:57 by abrun             #+#    #+#             */
/*   Updated: 2021/11/25 13:23:11 by abrun            ###   ########.fr       */
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
		int		index;
	
	public:
		Phone_book();
		~Phone_book();

		void	init_n_contact();
		void	search_contact();
		void	ask_for_index();
		void	add_contact();
		void	setIndex(int n);
		int		getIndex();
};
#endif
