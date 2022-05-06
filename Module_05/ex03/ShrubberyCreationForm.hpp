/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:11:26 by abrun             #+#    #+#             */
/*   Updated: 2022/04/20 16:58:50 by abrun            ###   ########.fr       */
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
		void	execAction(void) const;
};

std::ostream&	operator<<(std::ostream& os, const ShrubberyCreationForm&);
#endif
