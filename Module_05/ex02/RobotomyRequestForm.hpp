/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:28:45 by abrun             #+#    #+#             */
/*   Updated: 2021/12/05 16:24:00 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm : virtual public Form
{
	private:
		int	_exec;
		int	_sign;
		std::string	_target;

	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void) throw();
		int	checkExecGrade(int execGrade) const;
		void	execAction(void) const;
};
#endif
