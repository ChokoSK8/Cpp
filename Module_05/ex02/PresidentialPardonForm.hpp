/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:27:48 by abrun             #+#    #+#             */
/*   Updated: 2022/02/24 16:59:34 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : virtual public Form
{
	private:
		int	_exec;
		std::string	_target;

	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void) throw();
		int	checkExecGrade(int execGrade) const;
		void	execAction(void) const;
};
#endif
