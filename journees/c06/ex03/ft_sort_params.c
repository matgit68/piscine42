/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 22:56:12 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/08 23:30:11 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_arg(char *arg)
{
	while (*arg)
	{
		write(1, arg, 1);
		arg++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = s1[i] - s2[i];
	while (diff == 0)
	{
		if (!s1[i])
			break ;
		i++;
		diff = s1[i] - s2[i];
	}
	return (diff);
}

void	ft_sort_chars_tab(char *tab[], int size)
{
	int		index;
	int		plus_petit;
	int		j;
	char	*temp;

	index = 0;
	while (index < size - 1)
	{
		plus_petit = index;
		j = index + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[plus_petit]) < 0)
			{
				plus_petit = j;
			}
			j++;
		}
		temp = tab[index];
		tab[index] = tab[plus_petit];
		tab[plus_petit] = temp;
		index++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	argc--;
	argv++;
	i = 0;
	ft_sort_chars_tab(argv, argc);
	while (i < argc)
		print_arg(argv[i++]);
	return (0);
}
