/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:35:45 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/09 12:50:01 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (!nb)
		return (1);
	if (nb >= 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
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
		printf("Fact %d : %d\n", nb, ft_recursive_factorial(nb));
		i++;
	}
	return (0);
}*/
