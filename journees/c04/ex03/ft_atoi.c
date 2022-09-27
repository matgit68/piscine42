/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 09:19:43 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/18 09:59:48 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <libc.h>

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int		signe;
	int		nb;

	signe = 1;
	nb = 0;
	while (ft_isspace(*str))
			str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signe = -signe;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + *str - 48;
		str++;
	}
	return (nb * signe);
}
/*
int	main(void)
{
	printf("retour ft_atoi : %d\n", ft_atoi("\t\n\v \f \r\t+-+-09"));
	printf("retour  c_atoi : %d\n\n", atoi("-09"));
}*/
