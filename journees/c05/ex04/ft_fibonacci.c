/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:19:20 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/13 13:50:11 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index > 1)
		return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
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
		printf("Fibo de  %d : %d\n", nb, ft_fibonacci(nb));
		i++;
	}
	return (0);
}*/
