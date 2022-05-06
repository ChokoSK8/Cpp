/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:27:48 by abrun             #+#    #+#             */
/*   Updated: 2022/04/20 16:58:57 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : virtual public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm&);
		~PresidentialPardonForm(void) throw();
		PresidentialPardonForm&	operator=(const PresidentialPardonForm&);
		void	execAction(void) const;
};

std::ostream&	operator<<(std::ostream& os, const PresidentialPardonForm&);
#endif
