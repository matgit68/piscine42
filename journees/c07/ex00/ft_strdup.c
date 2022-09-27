/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:43:30 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/15 13:19:43 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libc.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		size;

	cpy = NULL;
	size = ft_strlen(src);
	cpy = malloc(size * sizeof(char) + 1);
	if (!cpy)
		return (0);
	size = 0;
	while (src[size])
	{
		cpy[size] = src[size];
		size++;
	}
	cpy[size] = 0;
	return (cpy);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "Y'a de l'echo ici";
	str2 = ft_strdup(str1);
	puts(str1);
	puts(str2);
	return (0);
}*/
