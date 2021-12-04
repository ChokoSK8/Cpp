/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:11:26 by abrun             #+#    #+#             */
/*   Updated: 2021/12/04 17:38:14 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class ShrubberyCreationForm : virtual public Form
{
	private:
		int	_exec;
		int	_sign;

	public:
		ShrubberyCreationForm(const Form&);
		~ShrubberyCreationForm(void) throw();
		int	checkExecGrade(int execGrade) const;
};
#endif		
