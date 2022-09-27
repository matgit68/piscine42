/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <mdjemaa@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:39:06 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/08 22:10:48 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	div_by10(long int nb)
{
	int		quotient;
	char	c;

	quotient = nb / 10;
	if (quotient > 0)
		div_by10(quotient);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	div_by10(n);
}
/*
int	main(void)
{
	ft_putnbr((int)"\t");
	write(1, "\n", 1);
	ft_putnbr((int)"\n");
	write(1, "\n", 1);
	ft_putnbr((int)"\v");
	write(1, "\n", 1);
	ft_putnbr((int)"\f");
	write(1, "\n", 1);
	ft_putnbr((int)"\r");
	write(1, "\n", 1);
	ft_putnbr((int)"\r");
	write(1, " ", 1);
	ft_putnbr((int)" ");
	return (0);
}*/
