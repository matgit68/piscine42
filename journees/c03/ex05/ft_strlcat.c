/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:10:49 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/12 17:22:42 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	ret;

	ret = ft_strlen(src);
	if ((int) size < ft_strlen(dest))
		ret += size;
	else
		ret += ft_strlen(dest);
	if (!size)
		return (ret);
	size--;
	while (*dest && size)
	{
		dest++;
		size--;
	}
	while (*src && size)
	{
		*dest = *src;
		src++;
		dest++;
		size--;
	}
	return (ret);
}
/*
int	main(void)
{
	char	s1[25] = "Bonjour";
	char	s2[] = "0123456789";
	char	s3[25] = "Bonjour";
	char	s4[] = "0123456789";
	int		size;
	int		l;

	l = 15;
	printf("Valeur s1 : %s, valeur s2 : %s l : %i ", s1, s2, l);
	size = ft_strlcat(s1, s2, l);
	printf("ft_ : %s %i\n", s1, size);

	printf("Valeur s3 : %s, valeur s4 : %s l : %i ", s3, s4, l);
	size = strlcat(s3, s4, l);
	printf("bsd : %s %i\n", s3, size);
	return (0);
}*/
