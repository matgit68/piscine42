/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:19:34 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/18 09:59:59 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 
#include <stdlib.h>

void	div_bybase(long int n, char *base, int taille_base)
{
	int		quotient;
	char	c;

	quotient = n / taille_base;
	if (quotient > 0)
		div_bybase(quotient, base, taille_base);
	c = base[n % taille_base];
	write(1, &c, 1);
}

int	base_ok(char *base)
{
	char	*index;
	int		taille;

	taille = 0;
	while (*base)
	{
		index = base + 1;
		if (*base == '+' || *base == '-')
			return (0);
		while (*index)
		{
			if (*base == *index)
				return (0);
			index++;
		}
		base++;
		taille++;
	}
	if (taille > 1)
		return (taille);
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			taille_base;
	long int	n;

	n = nbr;
	taille_base = base_ok(base);
	if (taille_base)
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		div_bybase(n, base, taille_base);
	}
}
/*
int	main(int argc, char **argv)
{
	(void) argc;
	ft_putnbr_base(atoi(argv[1]), argv[2]);
}*/
