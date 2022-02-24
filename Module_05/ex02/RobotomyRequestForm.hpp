/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:28:45 by abrun             #+#    #+#             */
/*   Updated: 2022/02/24 16:58:59 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm : virtual public Form
{
	private:
		int	_exec;
		std::string	_target;

	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void) throw();
		int	checkExecGrade(int execGrade) const;
		void	execAction(void) const;
};
#endif
