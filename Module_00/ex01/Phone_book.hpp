/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:09:57 by abrun             #+#    #+#             */
/*   Updated: 2022/04/20 10:38:28 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# include "point.h"
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
		int	search_contact();
		int	ask_for_index();
		int	add_contact();
		void	setIndex(int n);
		int		getIndex();
};
#endif
