/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 09:59:37 by abrun             #+#    #+#             */
/*   Updated: 2022/05/10 11:58:09 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include <exception>
# include "Form.hpp"

class	Form;

class	Bureaucrat : public std::exception
{
	private:
		const std::string	_name;
		int			_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat&);
		virtual	~Bureaucrat(void) throw();
		Bureaucrat& operator=(const Bureaucrat&);
		const std::string	getName(void) const;
		int			getGrade(void) const;
		void			increaseGrade(void);
		void			decreaseGrade(void);
		void			checkGrade(void);
		int			signForm(Form&) const;

		class	GradeTooHighException : virtual public exception
		{
			public:
				virtual const char*	what(void) const throw();
		};

		class	GradeTooLowException : virtual public exception
		{
			public:
				virtual const char*	what(void) const throw();
		};
};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);
#endif
