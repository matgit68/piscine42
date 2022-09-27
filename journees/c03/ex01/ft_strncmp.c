/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:30:54 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/08 15:28:24 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	if (n == 0)
		return (0);
	i = 0;
	diff = s1[i] - s2[i];
	while (!diff)
	{
		if (!s1[i] || !s2[i] || i == n - 1)
			return (0);
		i++;
		diff = s1[i] - s2[i];
	}
	return (diff);
}
/*
int	main(void)
{
	char	s1[] = "bon\0njo";
	char	s2[] = "bonjour";
	int		i;
	int		n;

	n = 0;
	i = ft_strncmp(s1, s2, n);
	printf("Valeur s1 : %s, valeur s2 : %s,\
ft_strcmp : %d\n", s1, s2, i);
	i = strncmp(s1, s2, n);
	printf("Valeur s1 : %s, valeur s2 : %s,\
strcmp : %d\n", s1, s2, i);
	return (i);
}*/
