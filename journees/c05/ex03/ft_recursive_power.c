/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:46:36 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/14 13:54:52 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (!power)
		return (1);
	if (power == 1)
		return (nb);
	if (power > 1)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
int	main(int argc, char *argv[])
{
	int	i;
	int	nb;
	int	pow;

	nb = atoi(argv[1]);
	pow = atoi(argv[2]);
	printf("Pow de %d a %d: %d\n", nb, pow, ft_recursive_power(nb, pow));
	return (0);
}*/
