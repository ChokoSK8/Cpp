/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_chpp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:23:24 by abrun             #+#    #+#             */
/*   Updated: 2022/04/22 12:40:24 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "point.h"

void	build_hpp(char *class)
{
	int			fd;
	char	*hpp;
	char	*cap;

	hpp = ft_strjoin(class, ".hpp");
	if (!hpp)
		exit(2);
	fd = open(hpp, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd < 0)
		exit(2);
	cap = ft_capitalize(class);
	if (!cap)
		exit(2);
	free(hpp);
	ft_printf_fd(fd, "#ifndef %s_HPP\n# define %s_HPP\n# include <string>\n# include <iostream>\n\nclass	%s\n{\n\tprivate:\n\n\tpublic:\n\t\t%s(void);\n\t\t%s(const %s&);\n\t\t~%s(void);\n\t\t%s &operator=(const %s&);\n};\n\nstd::ostream& operator<<(std::ostream&, const %s&);\n#endif", cap, cap, class, class, class, class, class, class, class, class, class);
	close(fd);
	free(cap);
}

void	build_cpp(char *class)
{
	int			fd;
	char	*cpp;

	cpp = ft_strjoin(class, ".cpp");
	if (!cpp)
		exit(2);
	fd = open(cpp, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd < 0)
		exit(2);
	free(cpp);
	ft_printf_fd(fd, "#include \"%s.hpp\"\n\n%s::%s(void)\n{\n\tstd::cout << \"%s default constructor called\" << std::endl;\n}\n\n%s::%s(const %s& ymir)\n{\n\tstd::cout << \"%s copy constructor called\" << std::endl;\n}\n\n%s::~%s(void)\n{\n\tstd::cout << \"%s destructor called\" << std::endl;\n}\n\n%s&\t%s::operator=(const %s& ymir)\n{\n\tstd::cout << \"%s copy assignement constructor called\" << std::endl;\n}", class, class, class, class, class, class, class, class, class, class, class, class, class, class);
	close(fd);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	build_hpp(av[1]);
	build_cpp(av[1]);
}
