/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:55:18 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/14 11:43:11 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i++ <= power)
		res *= nb;
	return (res);
}
/*
int	main(int argc, char *argv[])
{
	int	a;
	int	b;
	(void) argc;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("Pow de %d a %d: %d\n", a, b, ft_iterative_power(a, b));
	return (0);
}*/
