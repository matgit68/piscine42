/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <mdjemaa@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:39:06 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/03 15:58:41 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	div_by10(int nb)
{
	int		reste;
	int		quotient;
	char	c;

	quotient = nb / 10;
	reste = nb % 10;
	if (quotient > 0)
	{
		div_by10(quotient);
	}
	c = (char)reste + 48;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	div_by10(nb);
}
