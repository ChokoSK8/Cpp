/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:49:54 by abrun             #+#    #+#             */
/*   Updated: 2022/02/01 11:14:17 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "point.h"

int		ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_capitalize(char *str)
{
	char	*s;
	int		c;

	s = malloc(ft_strlen(str) + 1);
	if (!s)
		return (0);
	c = 0;
	while (str[c])
	{
		if (ft_islower(str[c]))
		{
			while (str[c] && ft_islower(str[c]))
			{
				s[c] = str[c] - 32;
				c++;
			}
		}
		while (str[c] && !ft_islower(str[c]))
		{
			s[c] = str[c];
			c++;
		}
	}
	return (s);
}
