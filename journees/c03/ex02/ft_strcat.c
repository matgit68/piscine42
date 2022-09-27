/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:10:49 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/08 15:18:58 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <libc.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*deb;

	deb = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = 0;
	return (deb);
}
/*
int	main(void)
{
	char	s1[7] = "Bonjouk";
	char	s2[25] = "Bonjour";
	char	s3[7] = "Bonjouk";
	char	s4[25] = "Bonjour";

	printf("Valeur s1 : %s, valeur s2 : %s,\
ft_strcat	: %s\n", s1, s2, ft_strcat(s1, s2));
	printf("Valeur s1 : %s, valeur s2 : %s,\
strcat	: %s\n", s3, s4, strcat(s3, s4));
	return (0);
}
*/
