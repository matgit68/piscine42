/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:14:39 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/13 14:37:41 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
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
		printf("%d est premier : %d\n", n, ft_is_prime(n));
		i++;
	}
	return (0);
}*/
