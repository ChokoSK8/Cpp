#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern default constructor called" << std::endl;
	_fcts[0]._name = "presidential pardon";
	_fcts[0]._fct = &Intern::makePres;
	_fcts[1]._name = "shrubbery creation";
	_fcts[1]._fct = &Intern::makeShru;
	_fcts[2]._name = "robotomy request";
	_fcts[2]._fct = &Intern::makeRobo;
}

Intern::Intern(const Intern& ymir)
{
	int	i = 0;

	std::cout << "Intern copy constructor called" << std::endl;
	while (i < 3)
	{
		_fcts[i]._name = ymir._fcts[i]._name;
		_fcts[i]._fct = ymir._fcts[i]._fct;
		i++;
	}	
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern&	Intern::operator=(const Intern& ymir)
{
	int	i = 0;

	std::cout << "Intern copy assignement constructor called" << std::endl;
	while (i < 3)
	{
		_fcts[i]._name = ymir._fcts[i]._name;
		_fcts[i]._fct = ymir._fcts[i]._fct;
		i++;
	}	
	return (*this);
}

Form*	Intern::makeForm(const std::string name, std::string target)
{
	int	i;
	Form *(Intern::*ret)(std::string);

	i = 0;
	while (i < 3)
	{
		if (name == _fcts[i]._name)
		{
			std::cout << "Intern creates " + name + " form" << std::endl;
			ret = _fcts[i]._fct;
			return (this->*ret)(target);
		}
		i++;
	}
	std::cout << "Intern cannot creates " + name << std::endl;
	return (NULL);
}

Form*	Intern::makePres(std::string target)
{
	PresidentialPardonForm	*pres = new PresidentialPardonForm(target);

	return (pres);
}

Form*	Intern::makeRobo(std::string target)
{
	RobotomyRequestForm	*pres = new RobotomyRequestForm(target);

	return (pres);
}

Form*	Intern::makeShru(std::string target)
{
	ShrubberyCreationForm	*pres = new ShrubberyCreationForm(target);

	return (pres);
}
