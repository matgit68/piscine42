/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:41:52 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/12 15:45:02 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <libc.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*deb;
	unsigned int	i;

	deb = dest;
	i = 0;
	while (*dest)
		dest++;
	while (*src && i < nb)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = 0;
	return (deb);
}
/*
int	main(void)
{
	char	s1[25] = "Bonjouk";
	char	s2[25] = "Bonjour";
	char	s3[25] = "Bonjouk";
	char	s4[25] = "Bonjour";

	printf("Valeur s1 : %s, valeur s2 : %s, ft_strncat\
	: %s\n", s1, s2, ft_strncat(s1, s2, 15));
	printf("Valeur s1 : %s, valeur s2 : %s,    strncat\
	: %s\n", s3, s4, strncat(s3, s4, 15));
	return (0);
}*/
