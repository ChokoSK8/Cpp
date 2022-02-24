/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:21:27 by abrun             #+#    #+#             */
/*   Updated: 2022/02/24 16:48:18 by abrun            ###   ########.fr       */
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
		bool	_signed;

	public:
		Form(void);
		Form(std::string name, int grade);
		Form(const Form&);
		virtual ~Form(void) throw();
		Form&	operator=(const Form&);
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
