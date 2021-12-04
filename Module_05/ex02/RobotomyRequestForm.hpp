/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:28:45 by abrun             #+#    #+#             */
/*   Updated: 2021/12/04 17:38:42 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm : virtual public Form
{
	private:
		int		_exec;
		int		_sign;
		Form&	_target;

	public:
		RobotomyRequestForm(const Form&);
		~RobotomyRequestForm(void) throw();
		int	checkExecGrade(int execGrade) const;
};
#endif
