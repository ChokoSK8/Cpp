/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:27:48 by abrun             #+#    #+#             */
/*   Updated: 2021/12/05 19:04:02 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : virtual public Form
{
	private:
		int	_exec;
		int	_sign;
		std::string	_target;

	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void) throw();
		int	checkExecGrade(int execGrade) const;
		void	execAction(void) const;
		static Form*	createForm(std::string);
};
#endif
