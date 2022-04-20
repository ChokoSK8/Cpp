/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:28:45 by abrun             #+#    #+#             */
/*   Updated: 2022/03/07 12:07:55 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <time.h>

class RobotomyRequestForm : virtual public Form
{
	private:
		int	_exec;
		std::string	_target;

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm&);
		~RobotomyRequestForm(void) throw();
		RobotomyRequestForm&	operator=(const RobotomyRequestForm&);
		int	checkExecGrade(int execGrade) const;
		void	execAction(void) const;
};

std::ostream&	operator<<(std::ostream& os, const RobotomyRequestForm&);
#endif
