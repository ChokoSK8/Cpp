/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:11:26 by abrun             #+#    #+#             */
/*   Updated: 2022/03/07 14:17:36 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class ShrubberyCreationForm : virtual public Form
{
	private:
		std::string	_tree;

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string _target);
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		~ShrubberyCreationForm(void) throw();
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm&);
		std::string	getTree(void) const;
		int	checkExecGrade(int execGrade) const;
		void	execAction(void) const;
};

std::ostream&	operator<<(std::ostream& os, const ShrubberyCreationForm&);
#endif
