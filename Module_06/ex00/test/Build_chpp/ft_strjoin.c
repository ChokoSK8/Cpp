/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:50:58 by abrun             #+#    #+#             */
/*   Updated: 2022/02/01 11:02:23 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "point.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t			s1_len;
	size_t			s2_len;
	char			*strjoin;
	size_t			strjoin_len;
	unsigned int	counter;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	strjoin_len = s1_len + s2_len + 2;
	strjoin = malloc(sizeof(char) * strjoin_len);
	if (!strjoin)
		return (NULL);
	counter = -1;
	while (++counter < s1_len)
		strjoin[counter] = s1[counter];
	while (counter - s1_len < s2_len)
	{
		strjoin[counter] = s2[counter - s1_len];
		counter++;
	}
	strjoin[counter] = 0;
	return (strjoin);
}
