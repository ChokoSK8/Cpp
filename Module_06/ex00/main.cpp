# include <iostream>
# include <sstream>
# include <string>
# include <limits>
# define SUCCESS 1
# define ERROR 0

int	checkIfInt(std::string arg)
{
	long long int	n;

	if (arg.find_first_not_of("0123456789-+") == std::string::npos)
	{
		std::stringstream(arg) >> n;
		if (n <= std::numeric_limits<int>::min()
			&& n >= std::numeric_limits<int>::min())
			return (SUCCESS);
	}
	return (ERROR);
}

int	checkIfChar(std::string arg)
{
	int	n;

	std::stringstream(arg) >> n;
	if (n >= 0 && n <= 127)
		return (SUCCESS);
	return (ERROR);
}

int	checkIfDouble(std::string arg)
{
	size_t	pos;
	long double	n;

	pos = arg.find_first_of(".");
	if (pos == 0)
		return (ERROR);
	if (arg.find_first_not_of("0123456789") == std::string::npos)
	{
		std::stringstream(arg) >> n;
		if (n <= std::numeric_limits<double>::max()
			&& n >= std::numeric_limits<double>::min())
			return (SUCCESS);
	}
	return (ERROR);
}

std::string	getConvertedType(std::string arg)
{
	std::string	type;

	if (checkIfInt(arg))
		type = "int";
	else if (checkIfChar(arg))
		type = "char";
	else if (checkIfDouble(arg))
		type = "double";
	/*else if (checkIfFloat(arg))
		type = "float";*/
	return (type);
}

int	main(int ac, char **av)
{
	std::string	type;

	if (ac != 2)
		return (1);
	type = getConvertedType(std::string(av[1]));
	std::cout << "Type : " + type << std::endl;
	return (0);
}
