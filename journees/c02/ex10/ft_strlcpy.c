/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:35:23 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/07 12:23:19 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	i = 0;
	while (src[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	dst[] = "abcde";
	char	src[] = "123456789";
	int		n;
	char	dst2[] = "abcde";
	char	src2[] = "123456789";

	n = 0;
	n = strlcpy(dst, src, 5);
	printf("STRLCPY dst : %s, src : %s, len : %d, n : %d \n", dst, src, 7, n);
	n = ft_strlcpy(dst2, src2, 5);
	printf("FT_LCPY dst : %s, src : %s, len : %d, n : %d \n", dst2, src2, 7, n);
}
*/
