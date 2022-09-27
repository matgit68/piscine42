/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:29:33 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/18 09:57:15 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <libc.h>

int	is_in(char c, char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

int	base_ok(char *b)
{
	int	i;
	int	j;
	int	taille;

	taille = 0;
	i = 0;
	while (b[i])
	{
		if (is_in(b[i], " \t\n\r\v\f+-"))
			return (0);
		j = i + 1;
		while (b[j])
		{
			if (b[i] == b[j])
				return (0);
			j++;
		}
		i++;
		taille++;
	}
	if (taille > 1)
		return (taille);
	else
		return (0);
}

int	value_in_base(char c, char *base)
{
	int	i;
	int	res;

	i = 0;
	res = -1;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (res);
}

char	*trim(char *str, int *signe)
{
	while (*str == '\v' || *str == '\f' || *str == '\t' || \
			*str == ' ' || *str == '\n' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*signe = -(*signe);
		str++;
	}
	return (str);
}

int	ft_atoi_base(char *str, char *base)
{
	int	signe;
	int	taille_b;
	int	nb;
	int	j;

	nb = 0;
	signe = 1;
	taille_b = base_ok(base);
	if (!taille_b)
		return (0);
	str = trim(str, &signe);
	j = 0;
	while (value_in_base(str[j], base) != -1)
	{
		nb = nb * taille_b + value_in_base(str[j], base);
		j++;
	}
	return (signe * nb);
}
/*
int	main(int argc, char **argv)
{
	int	nb;

	(void) argc;
	(void) argv;
	nb = ft_atoi_base(argv[1], argv[2]);
	printf("%d\n", nb);
	return (0);
}*/
