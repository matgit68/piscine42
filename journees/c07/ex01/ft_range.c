/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:26:03 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/19 16:50:24 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc((max - min) * sizeof(int));
	if (!tab)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int	main(int argc, char *argv[])
{
	(void) argc;
	int	a;
	int	b;
	long	i;
	long	size;
	int	*inttab;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	inttab = ft_range(a, b);
	if (!inttab)
		return (0);
	i = 0;
	size = b - a;
	while (i < size)
	{
		printf("%d, ", inttab[i]);
		i++;
	}
	return (0);
}
