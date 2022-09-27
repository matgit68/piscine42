/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:44:08 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/14 14:11:42 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>

int	ft_int_sqrt(long nb)
{
	long	i;

	i = 0;
	while (i * i < nb)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	lim;

	if (nb % 2 == 0)
		return (0);
	lim = (int) ft_int_sqrt(nb) + 1;
	i = 3;
	while (i < lim)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = 0;
	while (!ft_is_prime(nb + i))
		i++;
	return (nb + i);
}
/*
int	main(int argc, char *argv[])
{
	int n;
	int i;
   
	i = 1;
	while (i < argc)
	{
		n = atoi(argv[i]);
		printf("premier premier apres %d : %d\n", n, ft_is_prime(n));
		i++;
	}
	return (0);
}*/
