/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:27:21 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/08 13:15:50 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = s1[i] - s2[i];
	while (diff == 0)
	{
		if (!s1[i])
			break ;
		i++;
		diff = s1[i] - s2[i];
	}
	return (diff);
}
/*
int	main(void)
{
	char	s1[] = "XYZ";
	char	s2[] = "ABC";
	int		i;

	i = ft_strcmp(s1, s2);
	printf("FT _ Valeur s1 : %s, valeur s2 : %s, ft_strcmp : %d\n", s1, s2, i);
	i = strcmp(s1, s2);
	printf("CLib Valeur s1 : %s, valeur s2 : %s,    strcmp : %d\n", s1, s2, i);
	return (i);
}
*/
