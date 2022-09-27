/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:35:54 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/12 10:14:31 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*fin(char *str, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		j++;
		str++;
	}
	return (str);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*to_f;
	int		i;
	int		j;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		j = i;
		to_f = to_find;
		while (str[j] == *to_f)
		{
			j++;
			to_f++;
			if (!*to_f)
				return (fin(str, i));
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[25] = "";
	char	s2[25] = "col";

	printf("Valeur s1 : %s, valeur s2 : %s, \
			ft_strstr: %s\n", s1, s2, ft_strstr(s1, s2));
	printf("Valeur s1 : %s, valeur s2 : %s, \
			___strstr: %s\n", s1, s2, strstr(s1, s2));
	return (0);
}*/
