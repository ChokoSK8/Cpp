/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <abrun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 12:33:42 by abrun             #+#    #+#             */
/*   Updated: 2022/02/01 11:01:32 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.h"

size_t	ft_strlen(char *s)
{
	size_t	strlen;

	if (!s)
		return (0);
	strlen = 0;
	while (*s++)
		strlen++;
	return (strlen);
}