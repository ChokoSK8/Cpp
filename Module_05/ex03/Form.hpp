/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:21:27 by abrun             #+#    #+#             */
/*   Updated: 2022/04/21 13:02:00 by abrun            ###   ########.fr       */
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
		int		_maxGrade;
		int		_minGrade;
		bool		_signed;
		int		_grade;
		int		_exec;
		std::string	_target;

	public:
		Form(void);
		Form(std::string name, int grade);
		Form(const Form&);
		virtual ~Form(void) throw();
		Form&	operator=(const Form&);
		std::string	getName(void) const;
		int		getGrade(void) const;
		int		getMaxGrade(void) const;
		int		getMinGrade(void) const;
		bool	getStatus(void) const;
		std::string	getTarget(void) const;
		int		getExec(void) const;
		void	setName(std::string);
		void		setGrade(int);
		void		setExec(int);
		void		setTarget(std::string);
		void	beSigned(Bureaucrat&);
		void	check_grade(void);
		void	execute(Bureaucrat const&) const;
		void	checkSignature(void) const;
		void	checkBureaucratGrade(Bureaucrat const&) const;
		void	toSign(void);
		void	checkSignature(void);
		int	checkExecGrade(int execGrade) const;
		virtual void	execAction(void) const = 0;

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
		
		class	FormAlreadySigned : virtual public exception
		{
			public:
				virtual const char*	what(void) const throw();
		};
};

std::ostream&	operator<<(std::ostream&, const Form&);
#endif
