/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_fatorial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:14:10 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/13 11:46:36 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (nb)
		{
			fact *= nb;
			nb--;
		}
	}
	return (fact);
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
		printf("Fact %d : %d\n", nb, ft_iterative_factorial(nb));
		i++;
	}
	return (0);
}*/
