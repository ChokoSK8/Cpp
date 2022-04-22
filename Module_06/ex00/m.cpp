#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cstring>
#include <string>
#include <cmath>
#include <limits>
#include <limits.h>
#include <math.h>
#include <cctype>
#include <ctype.h>
#include <locale>

int main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Error arguments number" << std::endl;
	else
	{
		std::string	str(av[1]);
		int	size = str.size();
		double		convert = atof(av[1]);
		if (!isdigit(av[1][0]) && !av[1][1])
			convert = static_cast<double>(*av[1]);
		std::cout << "char : ";
		if (size == 1 && !isdigit(av[1][0]))
			std::cout << "'" << av[1] << "'" << std::endl;
		else
		{
			if (!std::isfinite(convert) || convert > CHAR_MAX || convert < CHAR_MIN)
				std::cout << "impossible" << std::endl;
			else if (convert < 33 || convert > 127)
				std::cout << "Not displayable" << std::endl;
		else
			std::cout << "'" << static_cast<char>(convert) << "'" << std::endl;
		}
		std::cout << "int : ";
		if (!std::isfinite(convert) || convert > INT_MAX || convert < INT_MIN)
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(convert) << std::endl;

		std::cout << "float : ";
		if (!std::isfinite(convert))
			std::cout << "nanf" << std::endl;
		else
		{
			float flo = static_cast<float>(convert);
			if (flo == std::numeric_limits<float>::infinity())
				std::cout << "+";
			std::cout << std::fixed << std::setprecision(size) << static_cast<float>(convert) << "f" << std::endl;
		}
		std::cout << "double : ";
		if (!std::isfinite(convert))
			std::cout << "nan" << std::endl;
		else
			std::cout << convert << std::endl;
	}
	return (0);
}
