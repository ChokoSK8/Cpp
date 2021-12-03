/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:21:27 by abrun             #+#    #+#             */
/*   Updated: 2021/12/03 18:56:03 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form : virtual public std::exception
{
	private:
		std::string	_name;
		int		_grade;

	protected:
		bool	_signed;

	public:
		Form(std::string name, int grade);
		virtual ~Form(void) throw();
		std::string	getName(void) const;
		int		getGrade(void) const;
		bool		getStatus(void) const;
		void		beSigned(Bureaucrat&);
		void		check_grade(void);	

		class	GradeTooHighException : virtual public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};

		class	GradeTooLowException : virtual public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};
};

std::ostream&	operator<<(std::ostream&, const Form&);
#endif
