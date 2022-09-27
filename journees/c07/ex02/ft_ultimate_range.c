/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:56:00 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/18 10:38:05 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	size = max - min;
	tab = malloc(size * sizeof(int));
	if (!tab)
		return (-1);
	i = 0;
	while (i < size)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (size);
}
/*
int	main(int argc, char *argv[])
{
	int	a;
	int	b;
	int	i;
	int	size;
	int	*tab;

	(void) argc;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	size = ft_ultimate_range(&tab, a, b);
	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\nsize %d", size);
	return (0);
}*/
