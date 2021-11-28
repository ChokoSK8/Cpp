/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:38:07 by abrun             #+#    #+#             */
/*   Updated: 2021/11/11 11:14:12 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	ft_megaphone(int ac, char **av)
{
	int			i;
	int			j;

	if (!av[1] || !av[1][0])
		return ;
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] >= 97 && av[i][j] <= 122)
				av[i][j] = av[i][j] - 32;
			j++;
		}
		if (i != ac - 1)
			std::cout << av[i] << " ";
		else
			std::cout << av[i] << std::endl;
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		ft_megaphone(ac, av);
	return (0);
}
