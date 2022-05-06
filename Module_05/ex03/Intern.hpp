#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern;

typedef struct	s_fctptr
{
	std::string	_name;
	Form*	(Intern::*_fct)(const std::string);
}		t_fctptr;

class	Intern
{
	private:
		struct s_fctptr	_fcts[3];

	public:
		Intern(void);
		Intern(const Intern&);
		~Intern(void);
		Intern &operator=(const Intern&);
		Form*	makeForm(const std::string, std::string);
		Form*	makePres(std::string);
		Form*	makeRobo(std::string);
		Form*	makeShru(std::string);
};

#endif
