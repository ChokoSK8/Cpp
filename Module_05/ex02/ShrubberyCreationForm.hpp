/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:11:26 by abrun             #+#    #+#             */
/*   Updated: 2022/02/24 16:59:11 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class ShrubberyCreationForm : virtual public Form
{
	private:
		int	_exec;
		std::string	_target;
		std::string	_tree;

	public:
		ShrubberyCreationForm(std::string _target);
		~ShrubberyCreationForm(void) throw();
		int	checkExecGrade(int execGrade) const;
		void	execAction(void) const;
};
#endif		
