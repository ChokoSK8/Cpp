/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:48:29 by abrun             #+#    #+#             */
/*   Updated: 2022/02/01 10:58:34 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "point.h"

int	print_s(char *arg, int fd)
{
	int	len;

	if (!arg)
		return (0);
	len = ft_strlen(arg);
	write(fd, arg, len);
	return (len);
}

int	print_arg(char c, va_list lst, int fd)
{
	if (c == 's')
		return (print_s(va_arg(lst, char *), fd));
	return (-1);
}

int	ft_printf_fd(int fd, const char *s, ...)
{
	va_list	lst;
	int		ret;
	int		n_ktr;

	va_start(lst, s);
	n_ktr = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			ret = print_arg(*s, lst, fd);
			if (ret >= 0)
				n_ktr += ret;
			else
				return (1);
		}
		else
		{
			write(fd, s, 1);
			n_ktr++;
		}
		if (*s)
			s++;
	}
	return (n_ktr);
}
