/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <mdjemaa@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:39:47 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/02 10:05:06 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_2digits(int a)
{
	char	c;
	char	d;

	c = (char)(a / 10) + 48;
	d = (char)(a % 10) + 48;
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_bloc(int a, int b)
{
	ft_print_2digits(a);
	write(1, " ", 1);
	ft_print_2digits(b);
	if (!(a == 98 && b == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_bloc(a, b);
		b++;
		}
	a++;
	}
}
