/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:11:26 by abrun             #+#    #+#             */
/*   Updated: 2021/12/05 19:05:57 by abrun            ###   ########.fr       */
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
		std::string	_target;
		std::string	_tree;

	public:
		ShrubberyCreationForm(std::string _target);
		~ShrubberyCreationForm(void) throw();
		int	checkExecGrade(int execGrade) const;
		void	execAction(void) const;
		static Form*	createForm(std::string);
};
#endif		
