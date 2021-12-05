/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:05:44 by abrun             #+#    #+#             */
/*   Updated: 2021/12/05 19:06:48 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"

typedef Form*	(*pif)(std::string);

class	Intern
{
	private:
		std::string	_form[3];
		pif			_pf[3];

	public:
		Intern(void);
		~Intern(void);
		Form*	makeForm(std::string form, std::string target);
};
#endif
