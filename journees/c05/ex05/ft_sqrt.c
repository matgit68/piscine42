/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:52:55 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/14 10:26:16 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>

int	ft_sqrt(int nb)
{
	long int	n;
	long int	lnb;

	n = 1;
	lnb = nb;
	while (n <= 46340)
	{
		if (n * n == lnb)
			return ((int) n);
		n++;
	}
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	int	i;
	int	nb;

	i = 1;
	while (i < argc)
	{
		nb = atoi(argv[i]);
		printf("Racine carree de  %d : %d\n", nb, ft_sqrt(nb));
		i++;
	}
	return (0);
}*/
