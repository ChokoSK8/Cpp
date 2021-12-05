/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:21:27 by abrun             #+#    #+#             */
/*   Updated: 2021/12/05 18:03:53 by abrun            ###   ########.fr       */
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
		int		_maxGrade;
		int		_minGrade;

	protected:
		bool	_signed;

	public:
		Form(std::string name, int grade);
		virtual ~Form(void) throw();
		std::string	getName(void) const;
		int		getGrade(void) const;
		bool	getStatus(void) const;
		void	beSigned(Bureaucrat&);
		void	check_grade(void);
		void	execute(Bureaucrat const&) const;
		void	checkSignature(void) const;
		void	checkBureaucratGrade(Bureaucrat const&) const;
		virtual int		checkExecGrade(int execGrade) const;
		virtual void	execAction(void) const;

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

		class	FormIsntSigned : virtual public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};

		class	UnrecognizedForm : virtual public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};
};

std::ostream&	operator<<(std::ostream&, const Form&);
#endif
