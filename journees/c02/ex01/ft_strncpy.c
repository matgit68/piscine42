/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:33:26 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/07 11:26:01 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	char	dst[] = "abcdefghi";
	char	src[] = "vwxyz";
	int		len;
	char	dst2[] = "abcdefghi";
	char	src2[] = "vwxyz";

	len = 10;
	dst[0] = *strncpy(dst, src, len);
	printf("STRNCPY dst : %s, src : %s, len : %d\n", dst, src, len);
	dst2[0] = *ft_strncpy(dst2, src2, len);
	printf("FT_NCPY dst : %s, src : %s, len : %d\n", dst2, src2, len);
}
*/
